Q Seetha (in python) 

def read_matrix(n):
    matrix = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

def matrix_addition(A, B):
    n = len(A)
    result = [[A[i][j] + B[i][j] for j in range(n)] for i in range(n)]
    return result

def matrix_subtraction(A, B):
    n = len(A)
    result = [[A[i][j] - B[i][j] for j in range(n)] for i in range(n)]
    return result

def matrix_multiplication(A, B):
    n = len(A)
    result = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += A[i][k] * B[k][j]
    return result

def main():
    # Read the size of the matrices
    n = int(input().strip())
    
    # Read the first matrix
    print("Enter the elements of the first matrix:")
    A = read_matrix(n)
    
    # Read the second matrix
    print("Enter the elements of the second matrix:")
    B = read_matrix(n)
    
    # Calculate and print matrix addition
    print("Matrix Addition:")
    addition_result = matrix_addition(A, B)
    print_matrix(addition_result)
    
    # Calculate and print matrix subtraction
    print("Matrix Subtraction:")
    subtraction_result = matrix_subtraction(A, B)
    print_matrix(subtraction_result)
    
    # Calculate and print matrix multiplication
    print("Matrix Multiplication:")
    multiplication_result = matrix_multiplication(A, B)
    print_matrix(multiplication_result)

if _name_ == "_main_":
    main()




Q  Arve  c language

#include <stdio.h>

int main() {
    int m, n;
    
    // Read the matrix dimensions
    scanf("%d %d", &m, &n);
    
    // Check if the matrix is square
    if (m != n) {
        printf("Matrix is not square.\n");
        return 1;
    }
    
    int matrix[m][n];
    
    // Read the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Initialize the sum of diagonal elements
    int diagonalSum = 0;
    
    // Sum the primary diagonal elements
    for (int i = 0; i < m; i++) {
        diagonalSum += matrix[i][i];
    }
    
    // Sum the secondary diagonal elements
    for (int i = 0; i < m; i++) {
        diagonalSum += matrix[i][n - i - 1];
    }
    
    // Subtract the middle element if the matrix size is odd (since it was added twice)
    if (m % 2 == 1) {
        diagonalSum -= matrix[m / 2][n / 2];
    }
    
    // Print the result
    printf("%d\n", diagonalSum);
    
    return 0;
}


Q  Alex  python lang

# Read the number of elements in the list
n = int(input().strip())

# Read the list elements
elements = list(map(int, input().strip().split()))

# Read the target number
target = int(input().strip())

# Check if the target is in the list and print the appropriate message
if target in elements:
    print(f"{target} is found in the list")
else:
    print(f"{target} is not found in the list")
