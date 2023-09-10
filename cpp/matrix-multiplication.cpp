#include <vector>
#include <iostream>

std::vector<std::vector<int>> matrix_multiplication(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b, size_t n){
  // TODO: Return the result of A × B in the form of an n × n matrix
  // NOTE: Please allocate and return matrix C
    std::vector<std::vector<int>> matrix_c(n, std::vector<int>(n));

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) {
            int sum = 0;
            for(int i = 0;i < n; i++) {
                sum += a[row][i] * b[row][i];
            }
            matrix_c[row][col] = sum;
        }     
    }
    return matrix_c;
}

void init_matrix(std::vector<std::vector<int>> &matrix) {
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = i + 1 * 2; //initialize test values
        }
    }  
}

void print_matrix(std::vector<std::vector<int>> matrix) {
    for(const auto &row : matrix) {
        for(int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n\n";
    }
}

int main() {
    //use vector's constructor to construct a vector inside another vector
    std::vector<std::vector<int>> matrix_a(3, std::vector<int>(3));
    std::vector<std::vector<int>> matrix_b(3, std::vector<int>(3));

    init_matrix(matrix_a);
    init_matrix(matrix_b);
  
    print_matrix(matrix_a);
    print_matrix(matrix_b);

    print_matrix(matrix_multiplication(matrix_a,matrix_b, 3));
    return 0;
}
