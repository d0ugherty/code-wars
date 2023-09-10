 #include <iostream>
 #include <string>
 #include <cmath>
 
// implementation of Luhn's algorithm
 
 bool validate(long long int n);

 int main() {
    long long int test = 12345678;
    std::cout<< "test number: " + std::to_string(test) << std::endl;
    std::cout << validate(test) << std::endl;
    return 0;  
 }

bool validate(long long int n) {
    //given a positive integer up to 16 digits
    //double every other digit from right to left starting w/ 2nd digit
    std::cout << n << std::endl;
    int sum = 0;
    int length = int(log10(n) + 1);
    int parity = length % 2;
    std::string numString = std::to_string(n);
    for(int i = length-1; i >= 0; i--){
     //if there an even number of digits, double every other digit starting w the first
        if(i % 2 != parity) {
          sum += std::stoi(std::string(1, numString[i]));
        } else {
            int result = 2 * std::stoi(std::string(1, numString[i]));
            // replace with sum of digits if the result is greater than 9
            if (result > 9){
              sum += result - 9;
            } else {
              sum += result;
            }          
        }
    }
    //take sum and divide it by 10, if remainder equals zero,
    //the original credit card number is valid (use modulus)
    return  (sum % 10) == 0;
 }

