#include <stddef.h>

void dgemm1(size_t n, double* A, double* B, double* C) {
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++) {
            double sum = 0.0;
            for (size_t k = 0; k < n; k++)
                sum += A[i*n + k] * B[k*n + j];
            C[i*n + j] = sum;
        }
}


