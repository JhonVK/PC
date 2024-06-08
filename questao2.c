#include <stdio.h>

int vogais();

int main(){


	int n;
	scanf("%d", &n);

	while((getchar()) != '\n');

	char string[n];
	fgets(string, n, stdin);

	printf("%d", vogais(string, n));

	return 0;
}

int vogais(char *p, int j){
	int vogais=0;
	for(int i=0; i<j; i++){

	if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'){

		vogais++;
		printf("%d", vogais);
	}

	}

return vogais;

}