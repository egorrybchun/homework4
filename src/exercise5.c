#include <stdio.h>

#define ROWS_A 10
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 10

void multiply_matrices(float a[ROWS_A][COLS_A], float b[ROWS_B][COLS_B], float result[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix_one_line(float matrix[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%.2f", matrix[i][j]);
            if (i != ROWS_A - 1 || j != COLS_B - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

int main() {
    float matrix_a[ROWS_A][COLS_A];
    float matrix_b[ROWS_B][COLS_B];
    float result[ROWS_A][COLS_B];

    // Чтение матрицы A (10x3)
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            scanf("%f", &matrix_a[i][j]);
        }
    }

    // Чтение матрицы B (3x10)
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            scanf("%f", &matrix_b[i][j]);
        }
    }

    // Умножение матриц
    multiply_matrices(matrix_a, matrix_b, result);

    // Вывод результата одной строкой
    print_matrix_one_line(result);

    return 0;
}
