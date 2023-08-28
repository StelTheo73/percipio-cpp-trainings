#ifndef FUNCTION_OVERLOADING_HPP
#define FUNCTION_OVERLOADING_HPP

#include <string>

namespace overloading {
    double add(double num_a, double num_b);
    double add(double num_a, double num_b, double num_c);
    double add(double num_a, double num_b, double num_c, double num_d);
    std::string add(std::string str_a, std::string str_b);
    int find_max(int* arr, size_t n);
    // int find_max(int arr[], size_t n); redefinition error
    float find_max(float* arr, size_t n);
    double find_square(double num);
    // double find_square(double& num); // Responsible for the ambiguous call
    long find_square(long& num);
}

#endif