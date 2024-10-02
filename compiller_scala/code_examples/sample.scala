// Class Definition
class Person(val name: String, var age: Int) {
// A method for displaying information about a person
def displayInfo(): Unit = {
println(s"Name: $name, Age: $age")
}
}


/* Object with the main method */
object Main extends App {

// Creating instances of the Person class
var person1 = new Person("Alexey", 34.)
val person2 = new Person("Maria", 10)

// Calling a method to display information
person1.displayInfo()
person2.displayInfo()


// Conditional operator
if (person1.age > person2.age) {
println(s"${person1.name} elder ${person2.name}.")
} else {
println(s"${person2.name} elder ${person1.name}.")
}


// For loop
println("List of Ages:")
for (i <- 1 to 5) {
println(s"Age: $i")
}

// Using the function
def greet(person: Person): String = {
s"Hello, ${person.name}!"
}


// Function call
println(greet(person1))
}