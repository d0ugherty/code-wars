#include <iostream>
#include <cmath>

int digital_root(int n) { 
    while(n >= 10) {
        int sum = 0;
        while(n != 0 ) { 
            sum += n % 10;
            n = n / 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int test = 167346;
    std::cout << "test int: " << std::to_string(test) << std::endl;
    std::cout << "digital root: " << std::to_string(digital_root(test)) << std::endl;
    return 0;

}
