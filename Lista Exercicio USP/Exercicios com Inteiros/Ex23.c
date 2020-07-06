/*23.S�o dados dois n�meros inteiros positivos p e q,
sendo que o n�mero de d�gitos de p � menor ou igual ao n�mero de
d�gitos de q. Verificar se p � um subn�mero de q.
Exemplos:
p = 23, q = 57238, p � subn�mero de q.
p = 23, q = 258347, p n�o � subn�mero de q.*/

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
