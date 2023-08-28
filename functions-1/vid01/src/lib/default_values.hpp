#ifndef DEFAULT_VALUES_HPP
#define DEFAULT_VALUES_HPP

#include <string>

namespace default_values {
    void greet(const std::string& greeting = "Hello world!"); // Default value must be in declaration (hpp)
    void multiple_greet(const std::string& name, const int& times = 1,
                        const std::string& greeting = "Hello");
}

#endif