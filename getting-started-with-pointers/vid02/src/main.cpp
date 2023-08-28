#include <array>
#include <iostream>
#include <vector>

int main() {
    // equivalent to 'int balance = 1000';
    int initial_balance {1000};
    // equivalent to 'int* balance_ptr = &balance;
    int* initial_balance_ptr {&initial_balance};
    std::array<int, 3> balance_arr {1, 2, 3};
     std::vector<std::array<int, 2>> balance_arr_2 {{1, 2}, {2, 3}, {3, 4}};

    // integer (i)
    std::cout << "Type of balance: "\
        << typeid(initial_balance).name() << "\n";
    // Pointer to integer (Pi)
    std::cout << "Type of balance_ptr: "\
        << typeid(initial_balance_ptr).name() << "\n";
    // Array of integers 3x1 (A3_i)
    std::cout << "Type of balance_arr: "\
        << typeid(balance_arr).name() << "\n";
    // Array of integers 3x2 (A3_A2_i)
    std::cout << "Type of balance_arr_2: "\
        << typeid(balance_arr_2).name() << "\n";

    std::cout << "\n=======================\n" << "\n";

    std::cout << "Initial balance: " << initial_balance << "\n";
    std::cout << "Address of balance: " << initial_balance_ptr << "\n";
    std::cout << "Initial balance through pointer: "\
        << *initial_balance_ptr << "\n";

    std::cout << "\n";

    *initial_balance_ptr = 2000;
    std::cout << "New balance: " << initial_balance << "\n";
    std::cout << "New balance through pointer: " << \
        *initial_balance_ptr << "\n";

    std::cout << "\n=======================\n" << "\n";

    char letter {'V'};
    char* letter_ptr {&letter};
    auto letter_ptr_auto {&letter};

    int balance {1000};
    int *balance_ptr {&balance};
    auto balance_ptr_auto {&balance};

    float expenses {245.56f};
    float* expenses_ptr {&expenses};
    auto expenses_ptr_auto {&expenses};

    double salary {5000.456};
    double* salary_ptr {&salary};
    auto salary_ptr_auto {&salary};

    std::cout << "sizeof char: " << sizeof(letter) << "\n";
    std::cout << "sizeof char*: " << sizeof(letter_ptr) << "\n";

    std::cout << "sizeof int: " << sizeof(balance) << "\n";
    std::cout << "sizeof int*: " << sizeof(balance_ptr) << "\n";

    std::cout << "sizeof float: " << sizeof(expenses) << "\n";
    std::cout << "sizeof float*: " << sizeof(expenses_ptr) << "\n";

    std::cout << "sizeof double: " << sizeof(salary) << "\n";
    std::cout << "sizeof double*: " << sizeof(salary_ptr) << "\n";

    std::cout << "\n=======================\n" << "\n";

    // Pointer to char (Pc)
    std::cout << "type of letter_ptr_auto: "\
        << typeid(letter_ptr_auto).name() << "\n";
    // Pointer to integer (Pi)
    std::cout << "type of balance_ptr_auto: "\
        << typeid(balance_ptr_auto).name() << "\n";
    // Pointer to float (Pf)
    std::cout << "type of expenses_ptr_auto: "\
        << typeid(expenses_ptr_auto).name() << "\n";
    // Pointer to double (Pd)
    std::cout << "type of salary_ptr_auto: "\
        << typeid(salary_ptr_auto).name() << "\n";

    return 0;
}
