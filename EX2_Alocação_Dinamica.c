#include <stdio.h>
#include <stdlib.h>

int main(){

	int *r;
	int n, par=0, impar=0;


printf("Digite a quantidade de elementos que sera informado: ");

scanf("%d", &n);


r=(int *)calloc(n, sizeof(int));


if(r == NULL){
		printf("Erro na alocação de memoria\n");
		return 1;
}


for(int i=0; i<n; i++){
	printf("Digite o numero %d: ", i);
	scanf("%d", &r[i]);
	if((*(r+i))%2==0){
		par++;
	}else{
		impar++;
	}
}
	printf("Pares: %d e impares: %d \n", par, impar);


free(r);
	return 0;
}
