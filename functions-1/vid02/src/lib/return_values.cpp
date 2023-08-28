#include <iostream>

#include "return_values.hpp"

namespace return_values {
    std::string get_formatted_string(const std::string& first_name,
        const std::string& last_name, const std::string& city) {

        std::string formatted_string =\
            "** " + first_name + " " + last_name + " " + " (" + city + ") **";
        
        return formatted_string;
    }

    std::string* get_larger_string(std::string* first, std::string* second) {
        return first->length() > second->length() ? first : second;
    }

    std::string& get_larger_string_ref(std::string& first, std::string& second) {
        return first.length() > second.length() ? first : second;
    }
}
