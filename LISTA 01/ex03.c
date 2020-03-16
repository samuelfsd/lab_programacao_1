#include <stdio.h>
/* Escreva um programa para ler 2 valores e uma das seguintes operações a serem executadas:
1. Adição
2. Subtração
3. Divisão
4. Multiplicação
Em seguida o programa deve calcular e escrever o resultado da operação escolhida sobre os dois valores lidos.
*/

int main ()
{
int val1,val2,x,resultado;
printf("\nInforme o valor 1: ");
scanf("%d",&val1);
printf("\n Informe o valor 2: ");
scanf("%d",&val2);
printf("ESCOLHA \n 1.ADICAO \n 2. SUBTRAÇAO \n 3.DIVISAO \n 4.MULTIPLICAÇAO \n");
scanf("%d",&x);
if (x == 1){
    resultado = val1+val2;
}
else if (x==2){
    resultado= val1-val2;
}
else if (x==3){
    resultado=val1/val2;
}
else if(x==4){
    resultado=val1*val2;
}
printf("O resultado entre %d e %d e: %d",val1,val2,resultado);

return 0;
}
