/*8.  Dados n e dois números inteiros positivos i e j diferentes de 0,
imprimir em ordem crescente os n primeiros naturais que são múltiplos
de i ou de j e ou de ambos.
 Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8*/

 #include <stdlib.h>

 int main(){
    int numero, multipos = 0,j, i, contador = 0;
    printf("\nDigite a quantidade de numeros a calcular: \n");
    scanf("%d",&numero);
    printf("\nDigite o primeiro termo multiplo: \n");
    scanf("%d",&i);
    printf("\nDigite o segundo termo multiplo: \n");
    scanf("%d",&j);

    while(contador <= numero){
        if(contador % i == 0 || contador % j == 0){
            printf("\nOs numeros multiplos sao: %d",contador);
        }
        contador++;
    }
    return 0;
 }
