#include <iostream>
#include <vector>


long long determinant(std::vector<std::vector<long long> > m) {
  // TODO: Return the determinant of the square matrix passed in
    int result;
    if(m.size() == 1) {
        return m[0][0];
    }

    if(m.size() == 2) {
        return (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
    } 

    //reduce matrix
    std::vector<std::vector<long long>> temp((m.size() - 1), std::vector<long long>(m[0].size() - 1));
    
    for(int col = 0; col < temp.size(); col++){
    }

    return 0;
}

void init_matrix(std::vector<std::vector<long long>> &matrix) {
     for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            matrix[i][j] = i + j + 1 * 2; //initialize test values
        }
    }  
}

void print_matrix(std::vector<std::vector<long long>> matrix) {
    for(const auto &row : matrix) {
        for(int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n\n";
    }
}

int main() {
    std::vector<std::vector<long long>> matrix_a(2,std::vector<long long>(2));
    std::vector<std::vector<long long>> matrix_b(3,std::vector<long long>(3));
    std::vector<std::vector<long long>> matrix_c(4,std::vector<long long>(4));

    init_matrix(matrix_a);
    init_matrix(matrix_b);
    init_matrix(matrix_c);

    print_matrix(matrix_a);
    std::cout << determinant(matrix_a) << std::endl;

    print_matrix(matrix_b);
    std::cout << determinant(matrix_b) << std::endl;

    print_matrix(matrix_c);
    std::cout << determinant(matrix_c) << std::endl;

    return 0;

}
