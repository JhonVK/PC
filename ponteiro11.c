#include <stdio.h>
#include <string.h>

int main() {
    
    int vetor[10]={1, 2, 3, 4 ,5, 6, 7, 8, 9, 10};
    int *ponteiro;

    ponteiro=vetor;



    for(int i=0; i<10; i++){
        *(ponteiro+i)=*(ponteiro+i)+1;
    }
     for(int i=0; i<10; i++){
       printf("%d", vetor[i]);
    }
   

   


    return 0;
}
