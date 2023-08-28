#include <iostream>

int main() {
    int radius = 25;
    int* radius_ptr = &radius;
    printf("value of radius: %d, stored at %p\n",\
            *radius_ptr, (void *) radius_ptr);

    // if you set: int arr[4] = {1, 2, 3, 4};
    // then arr is a pointer to type integer i.e. int*

    // Use nullptr instead of NULL to avoid bugs related to NULL
    // --> Compilation will fail if you try to use nullptr as an integer

    std::cout << (NULL == nullptr) << "\n"; // True
    std::cout << (radius_ptr == nullptr) << "\n"; // False
    std::cout << (radius_ptr == NULL) << "\n"; // False

    return 0;
}
