/*4.  Dados um inteiro x e um inteiro não-negativo n, calcular x^n.*/

#include <stdio.h>

int main(){
    int n, x, i = 1;
    printf("\nDigite o numero a ser elevado: \n");
    scanf("%d", &n);
    printf("\nDigite o expoente: \n");
    scanf("%d", &x);

    while(i < x){
        n = n * n;
        i++;
    }
    printf("\nO valor eh: %d", n);
    return 0;
}
