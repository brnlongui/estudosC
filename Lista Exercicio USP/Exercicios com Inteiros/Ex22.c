/*22.Dizemos que um n�mero natural n � pal�ndromo (3) se
o 1� algarismo de n � igual ao seu �ltimo algarismo,
o 2� algarismo de n � igual ao pen�ltimo algarismo,
e assim sucessivamente.
Exemplos:
567765 e 32423 s�o pal�ndromos.
567675 n�o � pal�ndromo.
Dado um n�mero natural   n > 10 , verificar se n � pal�ndrome.*/

#include <stdio.h>

int main(){
    int num, aux, reverso;
    printf("\nDigite um natural: ");
    scanf("%d", &num);

    aux = num;
    reverso = 0;
    while(aux != 0){
        reverso = reverso*10 + aux % 10;
        aux = aux / 10;
    }
    if(reverso == num){
        printf("\n%d eh palidrome", num);
    }else{
        printf("\n%d nao eh palidrome", num);
    }
    return 0;
}
