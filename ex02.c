#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Quantas notas? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor inválido.\n");
        return 1;
    }

    double *notas = (double *)malloc(n * sizeof(double));

    if (notas == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &notas[i]) != 1) {
            printf("Erro ao ler a nota.\n");
            free(notas);
            return 1;
        }
        soma += notas[i];
    }

    double media = soma / n;
    printf("Media: %.2f\n", media);
    free(notas);
    notas = NULL;
    return 0;
}