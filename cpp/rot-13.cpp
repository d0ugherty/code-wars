#include <string>
#include <iostream>
#include <regex>

std::string rot13(const std::string& str);

int main() {
    std::cout << rot13("EBG13 rknzcyr.") << std::endl;
}

std::string rot13(const std::string& str) {
    std::string result = "";
    std::regex pattern("[$&+,:;=?@#|0-9'<>.^*()%!-]");
    std::map<char,int> map1;
    std::map<char,int> map2;

    //map for cipher
    for(int i = 1; i < 27; i++){
        map1[char(64 + i)] = i;
    }

    map2[0] = 'Z';

    for(int i = 1; i < 26; i++){
        map2[i] = char(64+i);
    }

    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            if(std::regex_match(std::to_string(str[i]), pattern)){
                int number = ((map1[str[i]] + 13) % 26); 
                result += map2[number];
            }
        } else {
            result += " ";
        }
    }
    return result;
}