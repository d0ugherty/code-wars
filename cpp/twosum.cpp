#include <vector>
#include <iostream>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    
    std::size_t size = numbers.size();
    std::pair<std::size_t, std::size_t> resultPair;
    for(std::size_t i = 0; i < size; i++) {
        for(std::size_t j = i + 1; j < size; j++) {
            if((numbers[i] + numbers[j]) == target){
                return {i,j};
            }
        }
    }
    return {0,0};
}

int main() {
    std::cout << "TEST VALUES: 1234, 5678, 9012     TARGET: 14690" << std::endl;
    std::pair<std::size_t, std::size_t> result = two_sum({1234, 5678, 9012}, 14690);
    std::cout << "Result: " << result.first << " " << result.second << std::endl;
    return 0;
}
