/*20.(POLI 87)Dados n e uma seqüência de n números inteiros,
determinar quantos segmentos de números iguais consecutivos
compõem essa seqüência.
Exemplo: A seguinte seqüência é formada por 5 segmentos
de números iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1*/

#include <stdio.h>

int main(){
    int n, i, atual, anterior, cont;
    printf("\nDigite o numero de elementos da sequencia: ");
    scanf("%d", &n);
    printf("\nDigite uma sequencia com %d numeros inteiros: ", n);
    scanf("%d", &anterior);
    cont = 1;

    for(i=2; i<= n; i++){
        scanf("%d", &atual);
        if(atual != anterior){
            cont = cont+1;
            anterior = atual;
        }
    }
    printf("\nQuantidade de segmentos de numeros iguais da sequencia: %d\n", cont);
    return 0;
}
