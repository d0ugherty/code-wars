#include <iostream>

bool narcissistic(int value);

int main () {
    int value = 371;
    std::cout << value << "\n"; 
    std::cout << narcissistic(value) << "\n";
    return 0;
}

bool narcissistic( int value ){
  //Code away
  int result = 0;
  int currentDigit;
  //how many digits
  int digitCount = 0;
  int valDivided = value;
  
  while(valDivided != 0) {
    valDivided = valDivided / 10;
    digitCount++;
    std::cout << "digit count = " << digitCount << std::endl;
  }
  
  valDivided = value;
  //extract digits starting from the left
  for(int i = 0; i < digitCount; i++) {
    //first digit
    if(i == 0){
        currentDigit = value % 10;
        std::cout << "current digit = " << currentDigit << std::endl;
      } else {
        valDivided = valDivided / 10;
        currentDigit = valDivided % 10;
        std::cout << "current digit = " << currentDigit << std::endl; 
      }
    // and raise them to the power of digit count
    int raised = 1;
    for(int i = 0; i < digitCount; i++) {
        raised *= currentDigit;
        std::cout << "raised = " << raised << std::endl;
   }
    result += raised;
    std::cout << "result = " << result << std::endl;
  }
return result == value;
}
