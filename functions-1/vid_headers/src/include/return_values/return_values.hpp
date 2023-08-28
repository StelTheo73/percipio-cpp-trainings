#ifndef RETURN_VALUES_HPP
#define RETURN_VALUES_HPP

#include "../../lib/return_values/return_values.tpp"

namespace return_values {
    auto power_of(double num, int times);
    auto get_larger_string(std::string first, std::string second);
    const auto& get_larger_string_ref(std::string& first, std::string& second);

}

#endif