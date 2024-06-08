#include <stdio.h>

void amigos(int c, int d);

int main(){
	int a, b;
	printf("Digite os numeros a e b: ");
	scanf("%d %d", &a, &b);
	amigos(a, b);
	return 0;
}

void amigos(int c, int d){
int duv=0, duv2=0;
	for(int j=1; j<c; j++){
		if((c%j)==0){
			duv=j+duv;
		}
	}
	for(int k=1; k<d; k++){
		if((d%k)==0){
			duv2=k+duv2;
		}
	}
	if(c==duv2 && d==duv){
		printf("sao amigos");
	}else{
		printf("nao sao amigos");
	}	
}

