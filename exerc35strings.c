#include <stdio.h>
#include <string.h>

int main() {
    char strings[10][20]; // Array de 10 strings, cada uma com até 20 caracteres
    char palavraChave[20];

    // Lê as strings
    for(int i = 0; i < 10; i++) {
        fgets(strings[i], 20, stdin);
    }

    // Lê a palavra-chave
    fgets(palavraChave, 20, stdin);

    // Verifica se cada string corresponde à palavra-chave
    for(int i = 0; i < 10; i++) {
        if(strcmp(strings[i], palavraChave) == 0) {
            printf("Palavra encontrada!\n");
            return 0;
        }
    }

    printf("Palavra não encontrada.\n");
    return 0;
}
