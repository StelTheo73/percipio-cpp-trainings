#include <iostream>

namespace return_values {
    auto power_of(double num, int times) {
        double result = 1;

        for (int i = 0; i < times; i ++) {
            result = result * num;
        }

        return result;
    }

    auto get_larger_string(std::string first, std::string second) {
        int len_1 = first.length();
        int len_2 = second.length();

        if (len_1 == len_2) {
            // cannot return "" because it is not the same type as first/second
            return std::string {};
        }
        return len_1 > len_2 ? first : second;
    }

    const auto& get_larger_string_ref(std::string& first, std::string& second) {
        int len_1 = first.length();
        int len_2 = second.length();

        if (len_1 == len_2) {
            static std::string empty_string;
            return empty_string;
        }

        return len_1 > len_2 ? first : second;
    }
}
