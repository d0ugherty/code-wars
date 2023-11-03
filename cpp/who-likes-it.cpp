#include <string>
#include <iostream>
#include <vector>

std::string likes(const std::vector<std::string> &names) {
    int length = names.size();
    switch(length) {
        case 0:
            return "no one likes this";
        case 1:
            return names[0] + " likes this";
        case 2:
            return names[0] + " and " + names[1] + " like this";
        case 3:
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
        default:
            return names[0] + ", " + names[1] + " and " + std::to_string(length - 2) + " others like this";
        }
}

int main() {
    std::vector<std::string> names = {"Alex", "Jacob", "Mark", "Max"};
    std::cout << likes(names);
    return 0;
}
