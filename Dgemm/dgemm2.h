#ifndef DGEMM2_H
#define DGEMM2_H

#include <stddef.h>  // para size_t

// Função de multiplicação de matrizes otimizada com AVX (DGEMM versão 2)
void dgemm2(size_t n, double* A, double* B, double* C);

#endif
