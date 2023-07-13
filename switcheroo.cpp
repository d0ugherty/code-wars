#include <iostream>

std::string switcheroo(const std::string &str);

int main() {
    std::string str = "aabbccaabb";
    std::cout << "String " << str <<std::endl;
    std::cout << "switcherooi" << switcheroo(str) << std::endl;
    return 0;
}

std::string switcheroo(const std::string &str) {
    std::string copy = str;
    for(int i = 0; i <= copy.length(); i++){
        if(copy[i] == 'a') { 
            copy[i] = 'b';
        } else if (copy[i] == 'b') {
            copy[i] = 'a';
        }
    }
    return copy;
}

