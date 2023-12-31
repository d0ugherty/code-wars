#include <string>
#include <iostream>

std::string rot13(const std::string& msg) {
    std::string result = "";
    
    for (int i = 0; i < msg.size(); i++) {
        if (std::isalpha(msg[i])) {
            if (std::isupper(msg[i])) {
                result += (msg[i] + 13 - 'A') % 26 + 'A';
            } else {
                result += (msg[i] + 13 - 'a') % 26 + 'a';
            }
        } else {
            result += msg[i];
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    std::string test = argv[1];
    std::cout << "ciphering " << test << std::endl;
    std::cout << rot13(test) << std::endl;
}


