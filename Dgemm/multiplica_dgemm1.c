#include <stdio.h>
#include <stdlib.h>
#include "gerador_de_matriz.h"
#include "medidor_de_tempo.h"
#include "dgemm1.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho das matrizes (n)>\n", argv[0]);
        return 1;
    }

    size_t n = atoi(argv[1]);
    if (n <= 0) {
        printf("Valor de n deve ser positivo.\n");
        return 1;
    }

    double* A = gerar_matriz(n);
    double* B = gerar_matriz(n);
    double* C = gerar_matriz(n);

    double tempo = medir_tempo(dgemm1, n, A, B, C);

    free(A);
    free(B);
    free(C);

    return 0;
}
