#include <stdio.h>

int main() {

int codigo;

printf("Digite um codigo ASCII: ");
    scanf("%d", &codigo);

    printf("%d %c \n", codigo, codigo);

while((getchar()) !='\n');
char codigo2;

printf("Digite um codigo ASCII: ");
    scanf("%c", &codigo2);

    printf("%d %c \n", codigo2, codigo2);


    return 0;
}
