using namespace std;

long eliminate_unset_bits(string number){
  std::cout << "number " << number << std::endl;
  int shiftAmt = 0;

  for(int i = 0; i <= number.length(); i++) {
    if(number[i] == '1') {
      shiftAmt++;
    }
  }
  
  return (1L << shiftAmt) - 1L;
 }
