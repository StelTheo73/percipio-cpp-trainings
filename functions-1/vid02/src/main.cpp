#include <iostream>
#include <string>

#include "lib/return_values.hpp"

int main() {
    std::string first = "Stelios";
    std::string second = "Theofilou";

    std::string formatted_string =\
        return_values::get_formatted_string("Stelios", "Theofilou", "Vohaiko");
    std::cout << formatted_string << std::endl;

    const std::string* larger_string = return_values::get_larger_string(&first, &second);
    std::cout << *larger_string << std::endl;

    const std::string& larger_string_ref = return_values::get_larger_string_ref(first, second);
    std::cout << larger_string_ref << std::endl;

    return 0;
}
