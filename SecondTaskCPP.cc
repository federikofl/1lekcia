#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> li = {"a", "1", "b", "2", "c", "3"};
    std::vector<std::string> li_1;
    std::vector<std::string> li_2;

    for (size_t i = 0; i < li.size(); i += 2) {
        li_1.push_back(li[i]);
    }
    for (size_t i = 1; i < li.size(); i += 2) {
        li_2.push_back(li[i]);
    }

    std::cout << li_1[0];
    for (size_t i = 1; i < li_1.size(); ++i) {
        std::cout << "\n\n" << li_1[i];
    }
    
    std::cout << "\n\n";
    
    std::cout << li_2[0];
    for (size_t i = 1; i < li_2.size(); ++i) {
        std::cout << "\n\n" << li_2[i];
    }

    return 0;
}
