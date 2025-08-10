#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    
    for (const auto& name : names) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

    return 0;
}