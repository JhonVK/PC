#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *arquivo1, *arquivo2;
int numero;
arquivo1=fopen("C:/Users/joaov/Desktop/OneDrive/PC/numerosale.txt", "r");
arquivo2=fopen("C:/Users/joaov/Desktop/OneDrive/PC/saidapares.txt", "w");

int *p=NULL;

if (arquivo1==NULL){
    exit(1);
}
int i=0;
while(fscanf(arquivo1, "%d", &numero)!=EOF){
    printf("%d", numero);
p=(int *)realloc(p, (i+1)*sizeof(int));
p[i]=numero;
if(numero%2==0){
    fprintf(arquivo2, "%d\n", numero);
}
i++;
}
    return 0;
}