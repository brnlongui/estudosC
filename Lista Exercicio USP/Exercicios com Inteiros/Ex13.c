/*13.Um matem�tico italiano da idade m�dia conseguiu modelar o
ritmo de crescimento da popula��o de coelhos atrav�s de uma seq��ncia
de n�meros naturais que passou a ser conhecida como
seq��ncia de Fibonacci. Fa�a um programa que, dado n, calcula Fn.*/

#include <stdio.h>

int main(){
   int  n, ant, atual, prox, i;
   printf("\nDigite um numero n: ");
   scanf("%d", &n);

   ant = 0;
   atual = 1;
   i = 1;

   while(i < n){
        prox = atual + ant;
        ant = atual;
        atual = prox;
        i++;
        printf("\nNumero %d de fibonacci eh: %d\n", n, atual);
   }
   return 0;
}
