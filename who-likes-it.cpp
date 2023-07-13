#include <string>
#include <iostream>
#include <vector>

std::string likes(const std::vector<std::string> &names);

int main() {
    std::vector<std::string> names = {"Alex", "Jacob", "Mark", "Max"};

    std::cout << likes(names);
    return 0;
}



std::string likes(const std::vector<std::string> &names) {
    std::string likeString;
    int length = names.size();
    switch(length) {
        case 0:
            likeString = "no one likes this";
            return likeString;
        case 1:
            likeString = names[0] + " likes this";
            return likeString;
        case 2:
            likeString = names[0] + " and " + names[1] + " like this";
            return likeString;
        case 3:
            likeString = names[0] + ", " + names[1] + " and " + names[2] + " like this";
            return likeString;
        default:
            likeString = names[0] + ", " + names[1] + " and " + std::to_string(length - 2) + " others like this";
            return likeString;
        }
}
