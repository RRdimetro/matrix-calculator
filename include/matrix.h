#pragma once

struct Matrix {
    int rows;
    int cols;
    double** data;
};

// Создание и освобождение
Matrix create_matrix(int rows, int cols);
void free_matrix(Matrix& m);

// Вывод
void print_matrix(const Matrix& m);

// Операции
Matrix matrix_add(const Matrix& a, const Matrix& b);
Matrix matrix_multiply(const Matrix& a, const Matrix& b);
Matrix matrix_transpose(const Matrix& m);
Matrix matrix_from_array(double* data, int rows, int cols);

// Сравнение
bool matrix_equals(const Matrix& a, const Matrix& b, double tolerance);
