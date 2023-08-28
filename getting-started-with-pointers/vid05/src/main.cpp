#include <iostream>
#include <vector>

int main() {
    std::string name {"Stelios Theofilou"};
    std::string* name_ptr = {&name};

    std::cout << "Is string empty? " << \
        std::boolalpha << (*name_ptr).empty() << "\n";
    std::cout << "Original value of name: " << name << "\n";
    std::cout << "Length: " << (*name_ptr).length() << "\n";
    std::cout << "Character at index 6: " << name[6] << "\n";
    std::cout << "Character at index 6: " << (*name_ptr).at(6) << "\n";

    if (name.empty() == true) {
        std::cout << "Empty string" << "\n";
    }

    std::cout << "\n";

    *name_ptr = "steltheo73";
    std::cout << "Updated value of name: " << name << "\n";
    std::cout << "Is string empty? " << std::boolalpha << \
        (*name_ptr).empty() << "\n";

    if (name.empty() == true) {
        std::cout << "Empty string" << "\n";
    }

    std::cout << "\n";

    *name_ptr = "";
    std::cout << "Updated value of name: " << name << "\n";
    std::cout << "Is string empty? " << std::boolalpha << \
        (*name_ptr).empty() << "\n";

    if (name.empty() == true) {
        std::cout << "Empty string" << "\n";
    }

    std::cout << "\n===============================\n" << "\n";

    std::string name_1 {"Stelios Theofilou"};
    std::string name_2 {"Greg Theofilou"};
    std::string name_3 {"John Smith"};
    std::string name_4 {"Alice Smith"};
    std::vector<std::string*> names {&name_1, &name_2, &name_3, &name_4} ;

    std::cout << "Name pointer at index=2: " << names.at(2) << "\n";
    std::cout << "Name value at index=2: " << *(names.at(2)) << "\n";
    std::cout << "Length of name at index=2: "\
              << (names.at(2))->length() << "\n";

    return 0;
}
