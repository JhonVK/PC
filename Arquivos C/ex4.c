#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo;
	float numero=0.0;
	int a_=0, a=0, b=0, c=0, d=0;
	if ((arquivo=fopen("notas.txt", "r"))==NULL){
		exit(1);
	}else{
		printf("Arquivo acessado com sucesso \n");
	}

	while(fscanf(arquivo, "%f", &numero )!= EOF){
		printf("\n%.1f", numero);
		if(numero<=5){
			printf(" D");
			d++;
		}else if(numero<=7 && numero>5){
			printf(" C");
			c++;
		}else if(numero<=9.0 && numero>7){
			printf(" B");
			b++;
		}else if(numero<=9.5 && numero>9){
			printf(" A");
			a++;
		}else if(numero<=10 && numero>9.5){
			printf(" A+");
			a_++;
		}
	}


	printf("\nA+: %d, A: %d, B: %d, C: %d, D: %d", a_, a, b, c, d);



	fclose(arquivo);

	return 0;
}