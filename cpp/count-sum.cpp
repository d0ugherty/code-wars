#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    std::vector<int> result;
    if(input.empty()) {
      return result;
    }
    result = {0,0};
    for(int i = 0; i < input.size(); i++){
      input[i] > 0 ? result[0]++ : result[1] += input[i];
    }
  return result;
}