#include <vector>
#include <iostream>


std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
    int a_rows = a.size();
    int a_cols = a[0].size();

    std::vector<std::vector<int>> matrix_c(a_rows,std::vector<int>(a_cols));

    for(int row = 0; row < a_rows; row++){
        for(int col = 0; col < a_cols; col++){
            matrix_c[row][col] = a[row][col] + b[row][col];
        }
    }
    return matrix_c;
}

void init_matrix(std::vector<std::vector<int>> &matrix) {
     for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
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
    std::vector<std::vector<int>> matrix_a(2, std::vector<int>(3));
    std::vector<std::vector<int>> matrix_b(2, std::vector<int>(3));

    init_matrix(matrix_a);
    init_matrix(matrix_b);
  
    print_matrix(matrix_a);
    print_matrix(matrix_b);

    print_matrix(matrixAddition(matrix_a,matrix_b));
    return 0;
}
