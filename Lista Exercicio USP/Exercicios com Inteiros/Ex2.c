/* 2.  Dado um número inteiro positivo n,
calcular a soma dos n primeiros números inteiros positivos.*/
#include <stdio.h>

int main(){
    int numero, soma = 0, i = 1;
    printf("Digite o numero determinante da sequencia: \n");
    scanf("%d", &numero);

    while(i <= numero){
        soma = soma + i;
        i++;
    }
    printf("a soma dos numeros anteriores a %d, partindo de 0, eh: %d\n",numero,soma);
    return 0;
}
