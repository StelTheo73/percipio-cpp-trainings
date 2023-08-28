#include <iostream>
#include <map>
#include <memory>
#include <vector>

int main() {
    std::string name_1 {"Stelios Theofilou"};
    std::string name_2 {"Greg Theofilou"};
    std::string name_3 {"John Smith"};
    std::string name_4 {"Alice Smith"};

    std::vector<std::string> names {
        name_1, name_2, name_3, name_4, name_2
    };
    std::vector<std::string*> pointers_to_names {
        &name_1, &name_2, &name_3, &name_4, &name_2
    };
    std::vector<std::string>* pointer_to_string_vector {&names};
    std::vector<std::string*>* pointer_to_string_pointer_vector {&pointers_to_names};

    std::cout << "Address of name_1: " << &name_1 << "\n";
    std::cout << "Address of the first element of names: " << &names[1] << "\n";
    std::cout << "Address of the first element of pointer_to_names: " \
              << &pointers_to_names[0] << "\n";

    std::cout << "\n===============================\n" << "\n";

    auto name_ptr = names.begin();
    while (name_ptr != names.end()) {
        std::cout << " Position in array: " \
                  << std::to_address(name_ptr) \
                  << " String: " << *name_ptr << "\n";
        name_ptr++;
    }

    std::cout << "\n===============================\n" << "\n";

    auto name_ptr_2 = pointers_to_names.begin();
    while (name_ptr_2 != pointers_to_names.end()) {
        std::cout << "Position in array: " << std::to_address(name_ptr_2) \
                  << " Position of string: " << *name_ptr_2
                  << " String: " << *(*name_ptr_2) << "\n";
        name_ptr_2++;
    }

    std::cout << "\n===============================\n" << "\n";

    auto name_ptr_3 = pointer_to_string_vector->begin();
    while (name_ptr_3 != pointer_to_string_vector->end()) {
        std::cout << " Position in array: " \
                  << std::to_address(name_ptr_3) \
                  << " String: " << *name_ptr_3 << "\n";
        name_ptr_3++;
    }

    std::cout << "\n===============================\n" << "\n";

    auto name_ptr_4 = pointer_to_string_pointer_vector->begin();
    while (name_ptr_4 != pointer_to_string_pointer_vector->end()) {
        std::cout << "Position in array: " << std::to_address(name_ptr_4) \
                  << " Position of string: " << *name_ptr_4
                  << " String: " << *(*name_ptr_4) << "\n";
        name_ptr_4++;
    }

    std::cout << "\n===============================\n" << "\n";

    std::map<int, std::string*> employees_map {
        {111, &name_1},
        {222, &name_2},
        {333, &name_3},
        {444, &name_4}
    };

    auto employee_map_ptr = employees_map.begin();
    while (employee_map_ptr != employees_map.end()) {
        std::cout << (*employee_map_ptr).first << ": " \
                  << *((*employee_map_ptr).second) << "\n";
        std::cout << "Length of name: " \
                  << (*employee_map_ptr).second->length() << "\n\n";
        employee_map_ptr++;
    }

    return 0;
}
