#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main () {

	Nodo *lista = criar();

    // inserindo elementos na lista
    inserir(lista, 1);
    inserir(lista, 2);
    inserir(lista, 3);
    inserir(lista, 1);
    inserir(lista, 2);
    inserir(lista, 2);
    inserir(lista, 2);
    inserir(lista, 1);
    inserir(lista, 3);
    inserir(lista, 5);

    
    removerduplicado(lista);
    imprimir(lista);
    inserirfinal(lista, 999);
    imprimir(lista);
    
    removerprimeiro(lista);
    imprimir(lista);
    // imprimindo a lista
    printf("Nodo após inserção dos elementos: ");
    imprimir(lista);

    // removendo um elemento da lista
    remover(lista, 5);

    // imprimindo a lista após a remoção
    printf("Nodo após remoção do elemento 5: ");
    imprimir(lista);

    // buscando um elemento na lista
    int valor = 7;
    Nodo *resultado = buscar(lista, valor);
    if (resultado != NULL)
        printf("O elemento %d está na lista.\n", valor);
    else
        printf("O elemento %d não está na lista.\n", valor);

    // destruição da lista
    destruir(lista);

	return 0;

}

