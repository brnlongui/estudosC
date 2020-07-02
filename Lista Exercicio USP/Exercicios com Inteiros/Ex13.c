/*13.Um matemático italiano da idade média conseguiu modelar o
ritmo de crescimento da população de coelhos através de uma seqüência
de números naturais que passou a ser conhecida como
seqüência de Fibonacci. Faça um programa que, dado n, calcula Fn.*/

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
