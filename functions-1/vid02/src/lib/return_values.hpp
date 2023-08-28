#ifndef RETURN_VALUES_HPP
#define RETURN_VALUES_HPP

#include <string>

namespace return_values {
    std::string get_formatted_string(const std::string& first_name,
                                      const std::string& last_name,
                                      const std::string& city);
    std::string* get_larger_string(std::string* first, std::string* second);
    std::string& get_larger_string_ref(std::string& first, std::string& second);

}

#endif