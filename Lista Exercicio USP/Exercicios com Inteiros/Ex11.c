/*12.  Dados dois n�meros inteiros positivos,
determinar o m�ximo divisor comum entre eles
usando o algoritmo de Euclides.*/

#include <stdio.h>

int main(){
    int anterior, atual, resto;

    printf("\nDigite os dois inteiros: ");
    scanf("%d %d",&anterior, &atual);

    resto = atual % anterior;
    while(resto != 0){
        resto = anterior % atual;
        anterior = atual;
        atual = resto;
    }
    printf("%d\n", anterior);
    return 0;
}


