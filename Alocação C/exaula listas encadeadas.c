#include <stdio.h>
#include <stdlib.h>

void inserir(lista *inicio, int valor){
	
	lista *novo=(lista *)malloc(sizeof(lista));
	novo->info=valor; //mesma coisa que *(novo).info=valor;
	novo->prox=inicio->prox;
	inicio->prox=novo;
}
void remover(lista *inicio, int valor){
	lista *atual=inicio->prox;
	lista *anterior=inicio;

	while(atual != NULL && atual->info != valor){ //percorrendo a lista ate achar o valor que queremos excluir
		anterior=atual;
		atual=atual->prox;
	}

	if(atual==NULL){
	printf("elemento nao encontrado\n");
	exit(!);
	}

	anterior->prox=atual->prox;


}





typedef struct lista{
	int info;

}lista;



int main(){
	


	return 0;
}