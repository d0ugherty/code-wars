#include <string>
#include <iostream>
#include <sstream>
#include <vector>

std::string spinWords(const std::string &str) {
    std::vector<std::string> splitCopy = splitString(str, ' ');
    std::string result;
    int vectorSize = splitCopy.size();
    int wordCount = 0;
    for(std::string token : splitCopy) {
        int length = token.length();
        if(length >= 5){
            int j = length - 1;
            char temp;
            for(int i = 0; i < length/2; i++) {
                temp = token[i];
                token[i] = token[j];
                token[j] = temp;
                j--;
            }
        }
        wordCount++;
        result += token;
        if(wordCount != vectorSize){
          result += " ";
        }
    }
    return result;
}// spinWords

std::vector<std::string> splitString(const std::string& str, char delim) {
    std::vector<std::string> result;
    std::istringstream iss(str);
    std::string token;
    while(std::getline(iss, token, delim)) {
        result.push_back(token);
    }
    return result;
}

int main() {
    std::string str = "My fellow Americans";
    std::cout << spinWords(str);
    return 0;
}

