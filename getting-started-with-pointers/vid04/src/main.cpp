#include <array>
#include <iostream>

int main() {
    double* scores_ptr = nullptr;

    std::array<double, 4> scores {87.3, 88.2, 54.9, 34.6};

    // Point to the first element
    // !This approach assumes that scores is not empty!
    scores_ptr = &scores[0];
    // Alternative way to point to the
    // first element: scores_ptr = scores.data();
    // ! This is a safer approach !

    std::cout << "Value in scores at index=2: " << scores[2] << "\n";
    std::cout << "Value in scores_ptr at index=2: "\
        << *(scores_ptr + 2) << "\n";

    *(scores_ptr + 2) = 99.9;

    std::cout << "Value in scores at index=2: " << scores[2] << "\n";
    std::cout << "Value in scores_ptr at index=2: "\
        << *(scores_ptr + 2) << "\n";

    return 0;
}
