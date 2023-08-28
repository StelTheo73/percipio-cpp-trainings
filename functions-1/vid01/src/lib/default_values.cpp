#include <iostream>

#include "default_values.hpp"

namespace default_values {
    void greet(const std::string& greeting) { // Default value must be in declaration (hpp)
        std::cout << greeting << std::endl;
    }

    void multiple_greet(const std::string& name, const int& times,
                        const std::string& greeting) {
        for (int i = 0; i < times; i ++) {
            std::cout << greeting << " " << name << std::endl;
        }
    }
}
