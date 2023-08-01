#include <iostream>
#include <cmath>

int digital_root(int n);

int main() {
    int test = 167346;
    std::cout << "test int: " << std::to_string(test) << std::endl;
    std::cout << "digital root: " << std::to_string(digital_root(test)) << std::endl;
    return 0;
}

int digital_root(int n){
    //base case
    std::cout << "n = " << n <<std::endl;
    std::cout << "ceil " << ceil(log10(n)) << std::endl;
    if(ceil(log10(n)) == 1) {
        return 0;
    }
    if(n == 0){
        return 0;
    }

    return n % 10 + digital_root(n / 10);    
    
}
