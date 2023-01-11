#include <iostream>

int main() {
    std::cout << "Hello World!" << '\n';

    std::string_view course_greeting { "Welcome to PHAS0100" };
    std::cout << course_greeting << '\n';

    // First configure, build and run the project.
    // Then, modify the source code here by adding a line of code to print another string.
    // e.g. print out your favourite London landmark.
    // The CMake configuration can be skipped over and just have to invoke cmake --build
    std::cout << "Lord's, the home of cricket is my fav London landmark\n";

    return 0;
}
