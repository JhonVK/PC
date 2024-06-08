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
 char nomebusca[50];
 printf("Digite o nome a ser buscado: ")
 fgets(nomebusca, sizeof(nomebusca), stdin);

for (i=0; i<5000; i++){

    if(strcmp(nomebusca, alunos[i].nome)==0){
        printf("ALUNO %s encontradp\n", alunos[i].nome);
        if(alunos[i].nota>=7){
            printf("aprovado")
        }else{
            printf("Reprovado");
        }
        break;
    }
}

    return 0;
}

