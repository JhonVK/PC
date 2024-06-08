#include <stdio.h>
#include <stdlib.h>

int main(){

	int *r;
	
	int c=1;

r=(int *)calloc(c, sizeof(int));

 if (r == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

for(int i=0; ;i++){
	scanf("%d", &r[i]);
	if(r[i]==-999){
		break;
	}else{
		c++;
		r=(int *)realloc(r, c*sizeof(int));
	}
}


free(r);
printf("finalizou");


return 0;
}
