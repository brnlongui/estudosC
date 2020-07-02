/*7.  Dado um inteiro não-negativo n, determinar n!*/
#include <stdlib.h>

int main(){
    int i = 2, numero, n = 1;
    printf("\nDigite o n fatorial: \n");
    scanf("%d", &numero);

    while(i <= numero){
        n = i * n;
        i++;
    }
    printf("\nO resultado de n fatorial eh: %d",n);
    return 0;
}
