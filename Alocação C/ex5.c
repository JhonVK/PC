#include <stdio.h>
#include <stdlib.h>

int* valores_entre(int *v, int n, int min, int max, int *qtd) {
    int *resultado=NULL;
    *qtd = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= min && v[i] <= max) {
            resultado = realloc(resultado, (*qtd + 1) * sizeof(int));
            resultado[*qtd] = v[i];
            (*qtd)++;
        }
    }

    return resultado;
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(v) / sizeof(v[0]);
    int min = 1;
    int max = 3;
    int qtd;

    int *resultado = valores_entre(v, n, min, max, &qtd);

    printf("Valores entre %d e %d:\n", min, max);
    for (int i = 0; i < qtd; i++) {
        printf("%d ", *(resultado+i));
    }

    free(resultado);

    return 0;
}
