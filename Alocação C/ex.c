#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nome[50];
float nota;
}Turma;

int main(){

float soma=0;

int n;
printf("Digite a quantidade de alunos: \n");
scanf("%d", &n);

Turma *turma;

turma=(Turma *)calloc(n, sizeof(Turma));

if (turma== NULL){
exit(1);
}
for(int i=0;i<n;i++){

printf("nome: \n");
while(getchar()!='\n');
fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
printf("nota: \n");
scanf("%f", &turma[i].nota);
soma=soma+turma[i].nota;
}

printf("%.2f", soma/n);

free(turma);


return 0;
}