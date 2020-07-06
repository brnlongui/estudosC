/*2.  Dado um n�mero inteiro positivo n, determinar todos os inteiros
entre 1 e n que s�o comprimento da hipotenusa de um tri�ngulo ret�ngulo
com catetos inteiros.*/

#include <stdio.h>
#define VERDADEIRO 1
#define FALSO 0

int main(){
    int n, ca,co, hip, achou;
    printf("\nDigite o valor maximo da hipotenusa: ");
    scanf("%d", &n);

    for(hip = 1; hip < n; hip++){
        achou = FALSO;
        for(ca = 1; ca < hip && !achou; ca++){
            co = ca;
            while(ca*ca + co*co < hip*hip)
                co++;
            if(ca*ca + co*co == hip*hip){
                printf("\nhipotenusa = %d, catetos adjacente %d e oposto %d", hip, ca,co);
                achou = VERDADEIRO;
            }
        }

    }
    return 0;
}
