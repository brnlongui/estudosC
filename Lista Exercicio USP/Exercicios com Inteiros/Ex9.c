/*9.  Dizemos que um n�mero natural � triangular se ele � produto
de tr�s n�meros naturais consecutivos.
Exemplo: 120 � triangular, pois 4.5.6 = 120.
Dado um inteiro n�o-negativo n, verificar se n � triangular.*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Digite o valor de n: ");
    scanf("%d",&n);
    for (i = 1; i*(i+1)*(i+2) < n; i++)
        ;
    if (i*(i+1)*(i+2) == n)
        printf("%d eh o produto %d*%d*%d\n", n, i, i+1, i+2);
    else
        printf("%d nao eh triangular\n", n);

    return 0;
}
