#include <iostream>
#include "lib/return_values.hpp"

int main() {

    auto result_1 = return_values::power_of(3, 3);
    auto result_2 = return_values::power_of(3.5, 4);

    std::cout << "3^3 = " << result_1 << " - type: " << typeid(result_1).name() << std::endl;
    std::cout << "3.5^4 = " << result_2 << " - type: " << typeid(result_2).name() << std::endl;

    std::string first = "Stelios";
    std::string second = "Theofilou";
    std::string third = "Stelios";

    std::string larger_string_1 = return_values::get_larger_string(first, second);
    std::cout << larger_string_1 << std::endl;

    std::string larger_string_2 = return_values::get_larger_string(first, third);
    std::cout << larger_string_2 << std::endl;

    const std::string& larger_string_ref = return_values::get_larger_string_ref(first, second);
    std::cout << larger_string_ref << std::endl;

    return 0;
}
