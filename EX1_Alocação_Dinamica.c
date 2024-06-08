#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int *r;

r=(int *)calloc(5, (sizeof(int)));

for(int i=0; i<5; i++){
	printf("Digite o numero %d", i+1);
	scanf("%d", r[i]);
}
for(int i=0; i<5; i++){
	printf("Numero %d= [%d]", i+1, r[i]);
	
}

free(r);

	return 0;
}