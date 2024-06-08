#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

FILE *arquivo;
arquivo=fopen("nomes.txt", "r");
if(arquivo==NULL){
    return 1;
}

char linha[50];
char letras[27]={};
int nletras[27]={0};
int k=0;
int i=0;
int r=0;
while(fgets(linha, sizeof(linha), arquivo)!=NULL){  ///ander valder astore
      r=0;
      i=0;

   do{
        if (linha[0]==letras[i]){
            nletras[i]++;
            r=1;
        }else{
            i++;
        }
        if(i==27){
            letras[k]=linha[0];
            nletras[k]++;
            r=1;
            k++;
        }
    }while(r!=1);

}
printf("%c", letras[0]);

printf("%d", nletras[0]);

fclose(arquivo);

    return 0;
}

