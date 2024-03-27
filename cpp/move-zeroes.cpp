#include <vector>
#include <iostream>


std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> result = input;

  // your code here
    for(int i = 0; i < result.size(); i++) {
      // check for 0
        if(result[i] == 0){
            // move element to back of the array
            result.push_back(result[i]);
            // shift elements to keep order
            for(int j = i; j+1 < result.size(); j++) {
                result[j] = result[j + 1];
            }
        }
    }

    return result;
}

//void shift(std::vector<int>& input) {
  //  for(int i = 0; i < input.size(); i++){
//}

int main() {
    std::vector<int> arr = {0, 0, 1, 2, 3, 4, 0, 5};
    std::cout << "ARRAY: ";

    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i];
    }
    
    arr = move_zeroes(arr);

    std::cout << "RESULT: ";
    for(int i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
    }
}
