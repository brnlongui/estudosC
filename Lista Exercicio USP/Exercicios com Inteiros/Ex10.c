/*10.  Dado um inteiro positivo n, verificar se n é primo.*/
#include <stdio.h>

int main(){
    int i, flag = 0,n;
    printf("\nDigite o numero: ");
    scanf("%d", &n);
    i = n;
    while(i > 0){
        if(n % i == 0){
            flag++;
        }
        i--;
    }
    if(flag == 2){
        printf("\nO numero %d eh primo!",n);
    }else{
        printf("\nO numero %d nao eh primo!",n);
    }
    return 0;
}
