/*14.  Dizemos que um número i é congruente
módulo m a j se i % m = j % m.
Exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
Dados inteiros positivos n, j e m, imprimir os n primeiros naturais
congruentes a j módulo m.*/

#include <stdio.h>

int main(){
    int n, j, m, i = 0;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    printf("\nDigite o valor de j: ");
    scanf("%d", &j);
    printf("\nDigite o valor de m: ");
    scanf("%d", &m);

    while(i < n){
        if(i % m == j % m){
            printf("\nO valor %d eh congruente com o valor de %d mod %d",i, j, m);
        }else
            printf("\nO valor %d nao eh congruente!",i);
        i++;
    }
}
