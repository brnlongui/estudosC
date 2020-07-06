/*1.  Dados n e n seqüências de números inteiros não-nulos,
cada qual seguida por um 0, calcular a soma dos números pares
de cada seqüência.*/

#include <stdio.h>

int main(){
    int n, i = 0, j,sequencia, soma;
    printf("\nDigite o numero de sequencias: ");
    scanf("%d", &n);

    while(i < n){
        printf("\nDigite a sequencia: ");
        scanf("%d", &sequencia);
        soma = 0;
        j = 0;
        while(j <= sequencia){
            if( j % 2 == 0){
                soma = soma + j;
            }
            j++;
        }
        printf("\nA soma da sequencia %d eh: %d",i+1, soma);
        i++;
    }
    return 0;
}
