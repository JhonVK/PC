#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    char telefone[50];
}dados;
dados* imprimir(dados *contatos, int x);
dados* adicionar(dados *contatos, int n);

int main(){
    dados *contatos=NULL;
    int tamanhomem=0;
    int x=0;
    int n = 1;
    while(n>0){
        contatos = adicionar(contatos, tamanhomem);
        tamanhomem++;
        printf("Caso queira parar de adicionar informacoes digite 0: \n");
        scanf("%d", &n);
    }
    printf("Posicao que deseja buscar : \n");
        scanf("%d", &x);

        imprimir(contatos, x);
      printf("Posicao que deseja buscar : \n");
        scanf("%d", &x);

        imprimir(contatos, x);
      printf("Posicao que deseja buscar : \n");
        scanf("%d", &x);

        imprimir(contatos, x);
  
    return 0;
}

dados* adicionar(dados *contatos, int n){
    contatos = (dados *)realloc(contatos, sizeof(dados)*(n+1));
    printf("Digite o nome: ");
    scanf(" %[^\n]", contatos[n].nome);
    printf("Digite o telefone: ");
    scanf(" %[^\n]", contatos[n].telefone);
    return contatos;
}
dados* imprimir(dados *contatos, int x){
printf("%s\n", contatos[x].nome);
printf("%s", contatos[x].telefone);








}