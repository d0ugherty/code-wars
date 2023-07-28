#include <string>
#include <iostream>
#include <vector>

std::vector<std::string> solution(const std:: string &s);

int main() {
    solution("InteriorCrocodileAlligato");
    solution("InteriorCrocodileAlligator");
    return 0;
}

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> result;
    std::string temp = "";
    for(int i = 0; i < s.length(); i += 2){
        temp = s.substr(i,2);
        temp.length() == 2 ? result.push_back(temp) : result.push_back(temp += '_');    
    }
    return result;
}
