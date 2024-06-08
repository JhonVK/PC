#include <stdio.h>
#include <stdlib.h>

int main(){
	int *x, n, soma=0;

	printf("Quantidade de numeros: \n");
	scanf("%d", &n);

	x=(int *)malloc(n*sizeof(int));

	if(x == NULL)
		printf("Erro na alocação de memoria\n");
	for(int i=0; i<n; i++){
		printf("Digite o numero %d :", i);
		scanf("%d", &x[i]);
	}
	for(int i=0; i<n; i++){
		soma=soma+*(x+i);
	}
	printf("%d", soma);

	free(x);
	return 0;
}