#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *numeros;
	int n, i;

	printf("Quantidade de numeros: \n");
	scanf("%d", &n);

	numeros=(int *)malloc(n*sizeof(int));

	if(numeros == NULL)
		printf("Erro na alocação de memoria\n");
	for(i=0; i<n; i++){
		printf("numero %d: \n", i);
		scanf("%d", &numeros[i]);

	}
	for(i=0; i<n; i++){
		printf("numero digitado: %d \n", *(numeros+i));
		
	free(numeros);
	}

	return 0;
}