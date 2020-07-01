/*1.  Dada uma seqüência de números inteiros
    não-nulos, seguida por 0,
    imprimir seus quadrados.*/

#include <stdio.h>

int main(){
    int numero, quadrado;
    printf("\nDigite o numero a ser calculado o quadrado, para sair digite 0:\n");
    scanf("%d", &numero);

    while(numero != 0){
        quadrado = numero*numero;
        printf("O quadrado do numero %d eh %d\n", numero, quadrado);
        printf("Digite outro numero a ser calculado ou 0 para sair:\n");
        scanf("%d", &numero);
    }
    printf("saindo");
    return 0;
}
