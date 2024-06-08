#include <stdio.h>

int main() {

    int m, n;
	
	scanf("%d %d", &n, &m);

	int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Digite o valor da [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

           }
    }
    int indice;

    printf("Digite o indice da linha a ser multiplicada ");
            scanf("%d", &indice);
        int constante;
printf("Digite a contante");
            scanf("%d",&constante);

for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           if (i==indice){
           	matriz[i][j]=matriz[i][j]*constante;
           }

           }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\n", matriz[i][j]);
            

           }
    }


    return 0;
}
