#include <stdio.h>
#include <stdlib.h>


#define LIN 3
#define COL 3
int main(){

int *r;
int menor, smenor, soma=0;
r=(int *)calloc(LIN*COL, sizeof(r));

for(int i=0; i<9; i++){

    scanf("%d", &r[i]);
    if(i==0){
        menor=r[0];
    }
    if(i==1){
        smenor=r[1];
    }
    if(r[i]<menor){
        smenor=menor;
        menor=r[i];

    }  
    if(r[i]<smenor && r[i]>menor){
        smenor=r[i];
    }
    soma=soma+r[i];
}
printf("Menor numero: %d , Segundo menor numero: %d", menor, smenor);
free(r);


    return 0;
}