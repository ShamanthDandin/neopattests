
//seetha
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
  
    A = read_matrix(n)
 
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

if __name__ == "__main__":
    main()


//alexa
n = int(input().strip())


elements = list(map(int, input().strip().split()))


target = int(input().strip())

if target in elements:
    print(f"{target} is found in the list")
else:
    print(f"{target} is not found in the list")
    
//avre
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m != n) {
        printf("Matrix is not square.\n");
        return 1;
    }
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    
    for(int i = 0;i < m;i++){
        sum += matrix[i][i];
    }
    printf("%d\n",sum);
    
    return 0;
}
