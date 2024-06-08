#include <stdio.h>
#include <stdlib.h>

int main(){

	int *r;

	int c=1;


r=(int *)calloc(c, sizeof(int));

for(int i=0; ;i++){
	scanf("%d", &r[i]);
	if(r[i]==-999){
		return 0;
	}else{
		r=(int *)realloc(r, c++);

	}


}


free(r);

return 0;
}

