/*21.(POLI 89)Dados n e uma seq��ncia de n n�meros inteiros,
determinar o comprimento de um segmento crescente de comprimento m�ximo.
Exemplos:
Na seq��ncia   5,  10,  3,  2,  4,  7,  9,  8,  5   o comprimento
do segmento crescente m�ximo � 4.
Na seq��ncia   10,  8,  7,  5,  2   o comprimento de um segmento
crescente m�ximo � 1.*/
#include <stdio.h>

int main(){
    int num, n, ant, comp, compm, i;
    printf("\nDigite o numero de elementos da sequencia: ");
    scanf("%d", &n);
    printf("\nDigite uma sequencia com %d numeros inteiros: ",n);
    scanf("%d", &ant);
    comp = 1;
    compm = 1;

    for(i=1; i<n; i++){
        scanf("%d", &num);
        if(num > ant){
            comp = comp + 1;
            if(compm < comp){
                compm = comp;
            }
        }
        else{
            comp = 1;
        }
        ant = num;
    }
    printf("\nO comprimento do segmento crescente maximo eh: %d", compm);
    return 0;
}
