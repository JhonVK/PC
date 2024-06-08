
#include <stdio.h>
int main()
{

int vetor[12], r=0, t=0;
int vetpar[6], vetimpar[6]; 

for (int i=0; i<12; i++){
	scanf("%d", &vetor[i]);
	if(vetor[i]%2==0){
		vetpar[r]=vetor[i];
		r++;
	}else{
		vetimpar[t]=vetor[i];
		t++;
	}
}

for (int j=0; j<6; j++){

	printf("%d\n", vetimpar[j]);
}
for (int j=0; j<6; j++){

	printf("%d\n", vetpar[j]);
}



	return 0;
}


