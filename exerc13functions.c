#include <stdio.h>
#include <string.h>

// Função para remover todos os espaços em branco de uma string
void removeEspacos(char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    removeEspacos(frase);
    printf("Frase sem espacos: %s\n", frase);
    return 0;
}
