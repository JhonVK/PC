#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	char telefone[50];
}dados;

dados *inserir(dados *ponteiro, int tamanho);

int main(){
	dados *ponteiro=NULL;
	int tamanho=0;
	int f=4;
while(f!=0){

ponteiro=inserir(ponteiro, tamanho);
tamanho++;
printf("Caso queira parar de adicionar informacoes digite 0: \n");
scanf("%d", &f);
}
	return 0;
}

dados *inserir(dados *ponteiro, int tamanho){
	ponteiro=(dados *)realloc(ponteiro,(tamanho+1)*sizeof(dados));
	printf("Digite o seu nome: \n");
	scanf("%[^\n]", ponteiro[tamanho].nome);
while (getchar () != '\n' );
	printf("Digite seu telefone: ");
	scanf("%[^\n]", ponteiro[tamanho].telefone);
	return ponteiro;
}