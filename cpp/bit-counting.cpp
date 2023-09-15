#include <iostream>

unsigned int countBits(unsigned long long n) {
    int bitCount = 0;
    while (n !=0) {
        if (n % 2 == 1) {
            bitCount++;
        }
        n /= 2;
    }
    return bitCount;
}

/** Main function not part of solution
 **/
int main (){
    std::cout << countBits(12345) << std::endl;
    return 0;
}
