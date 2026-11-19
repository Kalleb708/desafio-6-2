#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n) {
    if (n <= 0) {
        return NULL;
    }

    int *vetor = (int *)malloc(n * sizeof(int));
    
    if (vetor == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    return vetor;
}

int main() {
    int n = 5;
    int *seq = cria_sequencia(n);

    if (seq == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    printf("\n");

    free(seq);
    seq = NULL;
    return 0;
}