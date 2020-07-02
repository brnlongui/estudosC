/*15.Dado um número natural na base binária,
transformá-lo para a base decimal.
Exemplo: Dado 10010 a saída será 18,
pois 1*2^4 + 0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 18.*/

#include <stdio.h>

int main(){
    int numero, p2, fim;
    printf("\nDigite o numero a ser calculado em base 10: ");
    scanf("%d", &numero);

    fim = 0;
    p2 = 1;

    while(numero != 0){
        fim = fim + numero % 10 * p2;
        numero = numero / 10;
        p2 = p2 *2;
    }
    printf("\nO numero a ser transformado da base 2 para decimal eh: %d",fim);
    return 0;
}
