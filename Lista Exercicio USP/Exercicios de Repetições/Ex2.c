/*2.  Dado um número inteiro positivo n, determinar todos os inteiros
entre 1 e n que são comprimento da hipotenusa de um triângulo retângulo
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
