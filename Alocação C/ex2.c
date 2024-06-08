#include <stdlib.h>
#include <Stdio.h>
#include <string.h>

int main(){

char *ponteiro=NULL;
char nome[100];
int tamanhoNome=0;
int menu=0;

printf("-1) Adicionar nome\n");
printf("-2) Remover nome\n");
printf("-3) Listar\n");
printf("-4) Sair\n");

printf("Digite o nome: ");

fgets(nome, 100, stdin);

int j=0;
while (nome[j]!= '\0')
{
    tamanhoNome++;
    j++;
}


ponteiro=realloc(ponteiro, tamanhoNome);

tamanhoNome=0;
for(int i=0; i<100; i++){
    if(nome[i]=='\0'){
        break;
    }
    tamanhoNome++;
    *ponteiro=nome[i];
    ponteiro++;
}


    return 0;
}