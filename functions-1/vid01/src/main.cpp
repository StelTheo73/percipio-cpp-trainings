#include <iostream>

#include "lib/default_values.hpp"

int main() {
    default_values::greet(); // Call with default value
    default_values::greet("Hello user!");

    std::cout << "================================================" << std::endl;

    default_values::multiple_greet("Greg");
    default_values::multiple_greet("Stelios", 5);
    default_values::multiple_greet("Stelios", 4, "Hi");

    return 0;
}
