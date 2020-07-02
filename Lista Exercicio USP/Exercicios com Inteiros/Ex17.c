/*18.Dados três números naturais, verificar se eles formam os lados
de um triângulo retângulo.*/

#include <stdio.h>

int main(){
    int aux, a, b, c;
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);

    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if(c > a){
        aux = a;
        a = c;
        c = aux;
    }
    if((b*b)+(c*c) == (a*a)){
        printf("\nO triangulo eh um triangulo retangulo");
    }else
        printf("\nO triangulo nao eh um triangulo retangulo");
    return 0;
}
