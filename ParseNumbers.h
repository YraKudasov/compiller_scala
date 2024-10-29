#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h> // Для isdigit()
#include <string.h>

void remove_underscores_in_integer(char* str_integer) {
    int i, j;
    i = j = 0;

    while (str_integer[i]) {
        if (str_integer[i] == '_') {
            i++;
            continue;
        }

        str_integer[j++] = str_integer[i++];
    }

    str_integer[j] = '\0';
}

bool validate_string(const char* str) {
    for (size_t i = 0; str[i]; ++i) {
        if (!isdigit((unsigned char)str[i])) {
            return false;
        }
    }
    return true;
}

bool parse_integer(int64_t* integer, char* str_integer, int base) {
    int offset = 0;
    switch (base) {
    case 2:
    case 16:
        offset = 2;
        break;
    }

    remove_underscores_in_integer(str_integer);

    // Убедимся, что строка содержит только допустимые символы
    if (!validate_string(str_integer)) {
        return false;
    }

    char* endptr;
    *integer = strtol(str_integer + offset, &endptr, base);

    // Проверим успешность преобразования
    if (endptr == str_integer + offset || *endptr != '\0') {
        return false; // Ошибка при преобразовании
    }
    return true; // Преобразование успешно
}

void parse_real(double* real, char* str_real) {
    *real = strtod(str_real, NULL);
}