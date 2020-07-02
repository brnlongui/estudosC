/*12. Dizemos que um inteiro positivo n é perfeito se for igual à soma
de seus divisores positivos diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
Dado um inteiro positivo n, verificar se n é perfeito.*/

#include <stdio.h>

int main(){
    int numero, soma = 0, i;
    printf("\nDigite o numero a ser verificado: ");
    scanf("%d", &numero);
    i = numero -1;
    while(i > 0){
        if(numero % i == 0){
            soma += i;
        }
        i--;
    }
    if(soma == numero){
        printf("\nO numero eh perfeito");
    }else{
        printf("\nO numero nao eh perfeito");
    }
}
