#include <stdio.h>


int main(){
	
	int int1;
	float real1;
	char char1;

	int * intp;
	float * realp;
	char * charp;

	intp= &int1;
	realp= &real1;
	charp= &char1;

	printf("%d", *intp);
    printf("%d", int1);

    *intp=5;
    *realp=5.5;
    *charp='c'
    printf("%d", *intp);
    printf("%d", int1);


	return 0;
}