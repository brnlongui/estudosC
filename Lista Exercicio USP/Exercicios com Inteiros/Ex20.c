/*20.(POLI 87)Dados n e uma seq��ncia de n n�meros inteiros,
determinar quantos segmentos de n�meros iguais consecutivos
comp�em essa seq��ncia.
Exemplo: A seguinte seq��ncia � formada por 5 segmentos
de n�meros iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1*/

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
