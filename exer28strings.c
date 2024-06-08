#include <stdio.h>

int main() {

char string[100];
int quanti=0;
fgets(string, 99, stdin);

for(int i=0; i<100; i++){
    if(string[i]  !=  '\0'){
        quanti++;
    }else{
        break;
    }
}
printf("%d", quanti-1);   // por culpa do \n (enter)

    return 0;
}
