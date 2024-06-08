#include <stdio.h>
#include <stdlib.h>

int main(){
	
FILE *arquivo;

arquivo=fopen("numeros.txt", "r");
if(arquivo==NULL){
	exit(1);
}

int *n = NULL;
int i=0;
int numero;
while(fscanf(arquivo,"%d",&numero)!=EOF){
	printf("%d", numero);
	n = realloc(n, sizeof(int)*(i+1));
	n[i] = numero;
	i++;
}

printf("%d\n", i);
for(i=i-1; i>=0; i--){
	
	printf("%d ", n[i]);
}

free(n);
fclose(arquivo);
return 0;
}
