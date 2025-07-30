#include <stdio.h>
#include <stdlib.h>

void dgemm(int n, double* A, double* B, double* C);  // Protótipo

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Uso: %%s <tamanho_da_matriz>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    double* A = (double*) malloc(n * n * sizeof(double));
    double* B = (double*) malloc(n * n * sizeof(double));
    double* C = (double*) malloc(n * n * sizeof(double));

    if (!A || !B || !C) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (int i = 0; i < n * n; i++) {
        A[i] = 1.0;
        B[i] = 2.0;
        C[i] = 0.0;
    }

    dgemm(n, A, B, C);

    free(A);
    free(B);
    free(C);

    return 0;
}