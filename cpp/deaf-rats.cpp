#include <string>
#include <iostream>

int countDeafRats(const std::string &town)
{


    return 0;
}

int main () {
    std::string test1 = "~O~O~O~O P"; // O deaf rats
    std::string test2 = "P O~ O~ ~O O~"; // 1 deaf rat
    std::string test3 = "~O~O~O~OP~O~OO~"; //2 deaf rats facing away
    
    std::cout << test1 << "     " << countDeafRats(test1) << " deaf rats\n";
    std::cout << test2 << "     " << countDeafRats(test2) << " deaf rats\n";
    std::cout << test3 << "     " << countDeafRats(test3) << " deaf rats\n";
    
    return 0;
}
