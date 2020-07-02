/*17.Dado um n�mero natural na base decimal,
transform�-lo para a base bin�ria.
Exemplo: Dado 18 a sa�da dever� ser 10010.*/

#include <stdio.h>

int main(){
    int n, bin, aux, dig, pt;
    printf("\nDigite o numero natural: ");
    scanf("%d", &n);

    aux = n;
    bin = 0;
    pt = 1;

    while(aux > 0){
        dig = aux % 2;
        aux = aux / 2;
        bin = bin + dig * pt;
        pt = pt * 10;
    }
    printf("\nO numero %d em binario eh %d",n, bin);
    return 0;
}
