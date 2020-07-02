/*9.  Dizemos que um número natural é triangular se ele é produto
de três números naturais consecutivos.
Exemplo: 120 é triangular, pois 4.5.6 = 120.
Dado um inteiro não-negativo n, verificar se n é triangular.*/

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
