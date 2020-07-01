/*5. Dados o número n de alunos de uma turma de
Introdução aos Autômatos a Pilha (MAC 414) e suas notas da
primeira prova, determinar a maior e a menor nota obtidas
por essa turma (Nota máxima = 100 e nota mínima = 0).*/

#include <stdio.h>

int main(){
    int notamaior = 0, notamenor = 100, numero, i = 0, nota;

    printf("\nDigite a quantidade de notas: ");
    scanf("%d", &numero);
    while(i < numero){
        printf("\nDigite a nota: \n");
        scanf("%d", &nota);
        i++;
        if(notamaior < nota){
            notamaior = nota;
        }
        if(notamenor > nota){
            notamenor = nota;
        }

        printf("\na nota menor eh: %d\n",notamenor);
        printf("\na nota maior eh: %d\n", notamaior);
    }
}
