#include <iostream>

#include "header_files/function_overloading.hpp"

namespace overloading {
    double add(double num_a, double num_b) {
        return num_a + num_b;
    }

    double add(double num_a, double num_b, double num_c) {
        return num_a + num_b + num_c;
    }

    double add(double num_a, double num_b, double num_c, double num_d) {
        return num_a + num_b + num_c + num_d;
    }

    std::string add(std::string str_a, std::string str_b) {
        return str_a + str_b;
    }

    int find_max(int* arr, size_t n) {
        int max = *arr;

        for (size_t i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    // redefinition error
    // int find_max(int arr[], size_t n) {
    //     int max = *arr;

    //     for (size_t i = 0; i < n; i++) {
    //         if (arr[i] > max) {
    //             max = arr[i];
    //         }
    //     }

    //     return max;
    // }

    float find_max(float* arr, size_t n) {
        float max = *arr;

        for (size_t i = 0; i < n; i ++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    double find_square(double num) {
        std::cout << "find_square(double num) called" << std::endl;
        return num * num;
    }
    // You cannot overload with find_square(const double num);

    // Responsible for the ambiguous call
    // double find_square(double& num) {
    //     std::cout << "find_square(double& num) called" << std::endl;
    //     return num * num;
    // }

    long find_square(long& num) {
        std::cout << "find_square(long& num) called" << std::endl;
        return num * num;
    }    
}
