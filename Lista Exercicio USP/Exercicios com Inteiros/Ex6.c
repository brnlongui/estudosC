/*6.Dados n e uma seqüência de n números inteiros,
determinar a soma dos números pares.*/

#include <stdio.h>

int main(){
    int ini, fim, pares = 0;
    printf("\nDigite o valor de inicio de intervalo: \n");
    scanf("%d",&ini);
    printf("\nDigite o valor do fim do intervalo: \n");
    scanf("%d",&fim);
    while(ini <= fim){
        if(ini % 2 == 0){
            pares = pares + ini;
            ini = ini + 2;
        }
        if(ini % 2 != 0){
            ini += 1;
        }
    }
    printf("\nA soma dos pares eh: %d", pares);
    return 0;
}
