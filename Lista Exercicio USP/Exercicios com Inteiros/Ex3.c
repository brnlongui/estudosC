/*3.  Dado um n�mero inteiro positivo n,
imprimir os n primeiros naturais �mpares */

#include <stdio.h>

int main(){
    int numero, impar = 1, i = 0;
    printf("/nEscreva o numero: \n");
    scanf("%d",&numero);

    while(i < numero){
        printf("\nO numero impar menor que %d, eh: %d",numero, impar);
        impar = impar+2;
        i=i+1;
    }
    return 0;
}
