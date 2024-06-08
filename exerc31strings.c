#include <stdio.h>

int main() {
    char strings[10][15]; // Array de 10 strings, cada uma com até 15 caracteres

    // Lê as strings
    for(int i = 0; i < 10; i++) {
        fgets(strings[i], 15, stdin);
    }

    // Verifica se cada string começa com 'a'
    for(int i = 0; i < 10; i++) {
        if(strings[i][0] == 'a') {
            printf("String%d\n", i+1);
        }
    }

    return 0;
}
