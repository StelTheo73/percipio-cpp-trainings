#include <iostream>

int main() {
    // literal "When .... Sally"
    // cannot be converted to 'char *', need a 'const char *'
    const char* movie_ptr {"When Harry Met Sally"};
    char movie[] {"Saving Private Ryan"};

    // char const* (PKc) --> Points to the first character ('W')s
    std::cout << "Type of movie_ptr: " << typeid(movie_ptr).name() << "\n";
    // char[20] A20_c
    std::cout << "Type of movie: " << typeid(movie).name() << "\n";

    std::cout << "Movie name: " << movie_ptr << "\n";
    std::cout << "Movie name: " << movie << "\n";

    std::cout << "Value in movie_ptr at index=0: " << movie_ptr[0] << "\n";
    std::cout << "Value in movie_ptr at index=0: " << *(movie_ptr) << "\n";

    std::cout << "Value in movie at index=0: " << movie[0] << "\n";
    std::cout << "Value in movie at index=0: " << *(movie) << "\n";

    std::cout << "Value in movie_ptr at index=6: " << movie_ptr[6] << "\n";
    std::cout << "Value in movie_ptr at index=6: " << *(movie_ptr + 6) << "\n";

    std::cout << "Value in movie at index=6: " << movie[6] << "\n";
    std::cout << "Value in movie at index=6: " << *(movie + 6) << "\n";

    std::cout << "Value in movie_ptr at index=9: " << movie_ptr[9] << "\n";
    std::cout << "Value in movie_ptr at index=9: " << *(movie_ptr + 9) << "\n";

    std::cout << "Value in movie at index=9: " << movie[9] << "\n";
    std::cout << "Value in movie at index=9: " << *(movie + 9) << "\n";

    return 0;
}
