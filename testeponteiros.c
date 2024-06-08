#include <stdio.h>

int main(){
	
	int int1=1;

	int * intp;

    int ** pp;


	intp= &int1;


	printf("%d\n", *intp);
    

    *intp=5;

    printf("%d\n", *intp);
  
    

    pp=&intp;

     printf("%d\n", **pp);

     **pp=4;

    printf("%d\n", int1);



	return 0;
}