#include <iostream>
#include <string>

int main() {
    std::string str_1 = "AaBbCcDd";
    std::cout << "str_1[::2]-> ";
    for (size_t i = 0; i < str_1.length(); i += 2) {
        std::cout << str_1[i];
    }
    std::cout << std::endl << std::endl;

    std::cout << "str_1[1::2]-> ";
    for (size_t i = 1; i < str_1.length(); i += 2) {
        std::cout << str_1[i];
    }
    std::cout << std::endl;

    return 0;
}
