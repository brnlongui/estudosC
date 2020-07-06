/*23.São dados dois números inteiros positivos p e q,
sendo que o número de dígitos de p é menor ou igual ao número de
dígitos de q. Verificar se p é um subnúmero de q.
Exemplos:
p = 23, q = 57238, p é subnúmero de q.
p = 23, q = 258347, p não é subnúmero de q.*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(){
    int p, q, pot10, aux, sub, achou;
    printf("Digite p e q: ");
    scanf("%d %d", &p, &q);
    pot10 = 1;

    while(pot10 <= p){
        pot10 = pot10 * 10;
    }
    achou = FALSE;
    aux = q;
    while(aux >= p && achou == FALSE){
        sub = aux%pot10;
        aux = aux/10;
        if(sub == p){
            achou = TRUE;
        }
    }
    if(achou == TRUE){
        printf("%d\n eh subnumero de %d", p, q);
    }else
        printf("%d\n nao eh subnumero de %d", p, q);

    return 0;
}
