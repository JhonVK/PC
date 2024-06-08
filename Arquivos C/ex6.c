#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cpf[50];
    int turma;
    char nome[50];
    float nota;
}dados;

int main(){
    char linha[50];
    dados vetordados[5000];
    char *token;
    FILE *arquivo;
    int i=0;
    arquivo=fopen("registro_alunos.txt", "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    while(fgets(linha, sizeof(linha), arquivo)!=NULL){
        
         token = strtok(linha, ";");
        strcpy(vetordados[i].cpf, token);

        token = strtok(NULL, ";");
        vetordados[i].turma = atoi(token);

        token = strtok(NULL, ";");
        strcpy(vetordados[i].nome, token);

        token = strtok(NULL, ";");
        vetordados[i].nota = atof(token);

        i++;

    }

    fclose(arquivo);

    for(int j = 0; j < i; j++){
        printf("\nCPF: %s\n", vetordados[j].cpf);
        printf("Nome: %s\n", vetordados[j].nome);
        printf("Turma: %d\n", vetordados[j].turma);
        printf("Nota em PC: %.2f\n", vetordados[j].nota);
    }

    return 0;
}

