#include <stdio.h>

void multiply_matrices(float a[10][3], float b[3][10], float result[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix_one_line(float matrix[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f", matrix[i][j]);
            if (i != 9 || j != 9) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

int main() {
    float matrix_a[10][3];
    float matrix_b[3][10];
    float result[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix_a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%f", &matrix_b[i][j]);
        }
    }

    multiply_matrices(matrix_a, matrix_b, result);

    print_matrix_one_line(result);

    return 0;
}
