#ifndef MEDIDOR_DE_TEMPO_H
#define MEDIDOR_DE_TEMPO_H

#include <stddef.h>

double medir_tempo(void (*funcao)(size_t, double*, double*, double*), size_t n, double* A, double* B, double* C);

#endif




