#include <stdio.h>
#include <time.h>
#include "medidor_de_tempo.h"

double medir_tempo(void (*funcao)(size_t, double*, double*, double*), size_t n, double* A, double* B, double* C) {
    clock_t start_time = clock(); // Hora de início

    funcao(n, A, B, C); // Chama a função

    clock_t end_time = clock(); // Hora de término

    return (double)(end_time - start_time) / CLOCKS_PER_SEC;
}

