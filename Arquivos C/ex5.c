#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo;
    arquivo=fopen("nomes.txt", "r");
    if(arquivo==NULL){
        return 1;
    }

    char linha[50];
    int contagem[128] = {0};  // Inicializa todos os elementos como 0

    while(fgets(linha, sizeof(linha), arquivo)!=NULL){  
        contagem[(int)linha[0]]++;  // Incrementa a contagem do caractere inicial
    }

    printf("%d", contagem['A']);  // Imprime a contagem de 'A'

    fclose(arquivo);

    return 0;
}
