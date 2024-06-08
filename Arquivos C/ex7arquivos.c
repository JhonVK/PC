#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cpf[50];
    int turma;
    char nome[50];
    float nota;
    int situacao;
}dados;

int main(){

int i=0;
int j=0;
char linha[50];
dados Dados[5000];
FILE *arquivo;
char *token;
arquivo=fopen("registro_alunos.txt", "r");


if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
}

 while(fgets(linha, sizeof(linha), arquivo)!=NULL){

token=strtok(linha, ";");
strcpy(Dados[i].cpf, token);

token=strtok(NULL, ";");
Dados[i].turma=atoi(token);

token=strtok(NULL, ";");
strcpy(Dados[i].nome, token);


token=strtok(NULL, ";");
Dados[i].nota=atof(token);

if(Dados[i].nota >=7){
	
	Dados[i].situacao=1;
}else{
	Dados[i].situacao=0;
}

i++;
 }
fclose(arquivo);
FILE* arquivo2= fopen("divulgacao_resultados.txt", "w");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

while(j<5000){

fprintf(arquivo2, "Nome: %s, Nota: %.2f, Situacao: %s\n", Dados[j].nome, Dados[j].nota, Dados[j].situacao ? "Aprovado" : "Reprovado");
j++;
}
fclose(arquivo);
fclose(arquivo2);
FILE *arquivo3;
arquivo3=fopen("divulgacao_resultados.txt", "r");

char linha2[50];
while(fgets(linha2, sizeof(linha2), arquivo3)!= NULL){
	puts(linha2);

}
fclose(arquivo3);


return 0;

}