#include <iostream>
#include "lib/function_overloading.hpp"

int main() {
    int int_arr[] {2, 4, 6, 1, 8, 89, 33};
    float float_arr[] {2.4f, 4.3f, 6.5f, 1.1f, 8.4f, 23.4f, 3.5f};

    std::cout << "Adding 2 numbers: " << overloading::add(23, 45) << std::endl;
    std::cout << "Adding 3 numbers: " << overloading::add(11, 22, 33) << std::endl;
    std::cout << "Adding 4 numbers: " << overloading::add(10, 20, 30, 40) << std::endl;
    std::cout << "Adding 2 strings: " << overloading::add("Stelios ", "Theofilou") << std::endl;

    std::cout << "Max int: " << overloading::find_max(int_arr, sizeof(int_arr) / sizeof(int)) << std::endl;
    std::cout << "Max float: " << overloading::find_max(float_arr, sizeof(float_arr) / sizeof(float)) << std::endl;

    std::cout << overloading::find_square(5) << std::endl;        // This is ok --> Uses the first definition
    // double num = 5;
    // std::cout << overloading::find_square(num) << std::endl;   // Ambiguous call --> error

    std::cout << "=================================" << std::endl;

    double double_num = 4;
    int int_num = 3;
    long long_num = 6l;

    std::cout << overloading::find_square(double_num) << std::endl;
    std::cout << overloading::find_square(int_num) << std::endl;
    
    std::cout << overloading::find_square(static_cast<long>(int_num)) << std::endl;
    // Calls the 'double' version, because static_cast produces a const reference to long, but 'long' version expects a temporary reference to long

    std::cout << overloading::find_square(long_num) << std::endl;

    return 0;
}
