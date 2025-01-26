from pathlib import Path
import subprocess
import re
import json
import sys

from graphviz import Digraph


PARSER_BUILD_PATH = r"x64\\Debug\\compiller_scala.exe"


def replace_rn_with_n(string: str) -> str:
    return "\n".join(string.splitlines())


def run_parser(
        file_path: str | Path,
        ) -> tuple[str, str]:

    try:
        output = subprocess.run(
           [PARSER_BUILD_PATH, str(file_path)],  # Указание команды парсера
            capture_output=True,
        )
    except FileNotFoundError:
        raise RuntimeError("Couldn't find the parser executable")
    stdout, stderr = output.stdout.decode(), output.stderr.decode()
    return replace_rn_with_n(stdout), replace_rn_with_n(stderr)


def make_error_message(stderr: str):
    """Считывает все сообщения об ошибках из stderr

    :param stderr: сообщения из stderr потока

    :return: сообщение об ошибках
    """
    errors = re.findall(r'error: .*\n?', stderr)
    return '\n'.join(errors)


def _dict_node_to_dot(value, current_node, graph):
    if isinstance(value, dict):
        dict_to_dot(value, current_node, graph)
    elif isinstance(value, list):
        for i, leaf in enumerate(value):
            leaf_node = f"{current_node}.{i}"  
            graph.node(leaf_node, label=f"[{i}]") 
            graph.edge(current_node, leaf_node)  
            _dict_node_to_dot(leaf, leaf_node, graph)  
    else:
        leaf_node = f"{current_node}.{value}"
        graph.node(leaf_node, label=str(value))
        graph.edge(current_node, leaf_node)


def dict_to_dot(source: dict, parent=None, graph=None):
    if graph is None:
        graph = Digraph()
    
    for key, value in source.items():
        current_node = f"{parent}.{key}" if parent else key
        graph.node(current_node, label=key)

        if parent is not None:
            graph.edge(parent, current_node)

        _dict_node_to_dot(value, current_node, graph)

    return graph


def visualize(file: str | Path, filename: str | Path = "dot-output/graph.gv") -> None:
    stdout, stderr = run_parser(file) 
    print(stderr)
    print(stdout)
    tree = json.loads(Path("result.json").read_text())
    tree = {"root": tree}
    graph = dict_to_dot(tree)
    graph.view(filename)


if __name__ == "__main__":
    files = sys.argv[1:]

    if not files:
        print("Expected at least one file")
        sys.exit(1)
    
    visualize(files[0])
