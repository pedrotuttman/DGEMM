#include <stdlib.h>
#include <stddef.h>
#include "gerador_de_matriz.h"

double* gerar_matriz(size_t n) {
    double* matriz = (double*) malloc(n * n * sizeof(double));
    for (size_t i = 0; i < n * n; i++) {
        matriz[i] = (double)rand() / RAND_MAX;
    }
    return matriz;
}



