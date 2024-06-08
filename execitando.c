#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	 char cpf[50];
    int turma;
    char nome[50];
    float nota;

}dados;

int main(){
dados vetordados[5000];
char *token;

int i=0;
char linha[100];
FILE *arquivo1;
arquivo1=fopen("registro_alunos.txt", "r");
if(arquivo1==NULL){
    exit(1);
}

while(fgets(linha, sizeof(linha), arquivo1) != NULL){
 	token=strtok(linha, ";");
 	strcpy(vetordados[i].cpf, token);

 	token=strtok(NULL, ";");
 	vetordados[i].turma=atoi(token);


 	token=strtok(NULL, ";");
 	strcpy(vetordados[i].nome, token);


 	token=strtok(NULL, ";");
 	vetordados[i].nota=atof(token);

	i++;



}
    for(int j = 0; j < i; j++){
        printf("\nCPF: %s\n", vetordados[j].cpf);
        printf("Nome: %s\n", vetordados[j].nome);
        printf("Turma: %d\n", vetordados[j].turma);
        printf("Nota em PC: %.2f\n", vetordados[j].nota);
    }

fclose(arquivo1);
return 0;


	
}