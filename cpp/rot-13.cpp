#include <string>
#include <iostream>
#include <regex>

std::string rot13(const std::string &msg) {
    std::string result = "";
    std::regex pattern("[$&+,:;=?@#|0-9'<>.^*()%!-]");
    std::map<char,int> map1;
    std::map<char,int> map2;

    //map for cipher
    for(int i = 1; i < 27; i++){
        map1[char(64 + i)] = i;
        //std::cout << map1[char(64+1)];
    }

    map2[0] = 'Z';

    for(int i = 1; i < 26; i++){
        map2[i] = char(64+i);
        std::cout << map2[i];
    }

    for(int i = 0; i < msg.size(); i++){
        if(msg[i] != ' '){
            //if(std::regex_match(std::to_string(msg[i]), pattern)){
                int number = ((map1[msg[i]] + 13) % 26);
                std::cout << "map1 mesg[i] + 13 = " << map1[msg[i]] + 13 << std::endl;
                std::cout<<(map1[msg[i]] + 13) % 26 << std::endl;
                result += map2[number];
           // }
        } else {
            result += " ";
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    std::string test = argv[1];
    std::cout << "ciphering " << test << std::endl;
    std::cout << rot13(test) << std::endl;
}


