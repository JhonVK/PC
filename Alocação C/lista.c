#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// função para criar uma lista vazia com cabeçalho
Nodo *criar() {
    Nodo *inicio = (Nodo *)malloc(sizeof(Nodo));
    if (inicio == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }
    inicio->prox = NULL; // inicialmente a lista está vazia
    return inicio;
}

// função para destruir a lista liberando a memória alocada
void destruir(Nodo *inicio) {
    Nodo *atual = inicio->prox;
    while (atual != NULL) {
        Nodo *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(inicio); // liberação do nó cabeça
}

//remoev elementos duplicads
void removerduplicado(Nodo *inicio) {
    Nodo *atual=inicio->prox;
    while(atual!=NULL){
        Nodo *duplicado=buscar(atual, atual->info);
        if(duplicado!=NULL)//elemento esta duplicado 
            remover(atual, duplicado->info);
        else
            atual=atual->prox;
    }


}

// função para inserir um elemento no início da lista
void inserir(Nodo *inicio, int valor) {
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    if (novo == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }
    novo->info = valor;
    novo->prox = inicio->prox;
    inicio->prox = novo;
}
void inserirfinal(Nodo *inicio, int valor) { //ex1
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    if (novo == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    novo->info = valor;
    novo->prox = NULL; // o próximo do novo nodo será NULL, pois ele será o último nodo


    Nodo *atual = inicio->prox;
    while (atual->prox != NULL) { // percorre a lista até o último nodo
        atual = atual->prox;
    }

    atual->prox = novo; // insere o novo nodo no final da lista

}

// função para remover um elemento da lista
void removerprimeiro(Nodo *inicio) {

    if(inicio->prox != NULL){
    Nodo *atual = inicio->prox;
  
    inicio->prox = atual->prox;
    free(atual);
}
}
void remover_ultimo(Nodo *inicio) {
    // Verifica se a lista não está vazia
    if (inicio->prox != NULL) {
        Nodo *anterior = inicio;
        Nodo *atual = inicio->prox;

        // Percorre a lista até o último nodo
        while (atual->prox != NULL) {
            anterior = atual;
            atual = atual->prox;
        }

        // Remove o último nodo
        anterior->prox = NULL;
        free(atual);
    }
}

// função para remover um elemento da lista
void remover(Nodo *inicio, int valor) {
    Nodo *anterior = inicio;
    Nodo *atual = inicio->prox;

    // procura pelo elemento a ser removido
    while (atual != NULL && atual->info != valor) {
        anterior = atual;
        atual = atual->prox;
    }
    // se o elemento for encontrado, então ajustam-se ponteiros e remove-o
    anterior->prox = atual->prox;
    free(atual);
}

// função para buscar um elemento na lista a partir do seu valor
Nodo *buscar(Nodo *inicio, int valor) {
    Nodo *atual = inicio->prox;
    while (atual != NULL) {
        if (atual->info == valor)
            return atual;
        atual = atual->prox;
    }
    return NULL;  // elemento não encontrado
}

// função para imprimir os elementos da lista
void imprimir(Nodo *inicio) {
    Nodo *atual = inicio->prox; // ignora-se o nó cabeça
    while (atual != NULL) {
        printf("%d ", atual->info);
        atual = atual->prox;
    }
    printf("\n");
}