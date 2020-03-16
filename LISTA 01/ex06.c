#include <stdio.h>
/*6. Faça um programa que implemente o jogo da senha (para 2 pessoas):
a) O jogador 1 digita uma senha (valor inteiro entre 0 e 100) sem o conhecimento do jogador 2;
b) O jogador 2 tem 5 chances para descobrir a senha;
c) A cada tentativa do jogador 2, o programa deve avisar se o valor digitado é maior, menor ou igual a senha;
d) Se o jogador 2 acertar a senha, o programa não deve pedir mais nenhuma tentativa.
*/
int main(){
int num,num_jogador1,jogadas = 0;
printf("Digite o numero JOGADOR 1 para JOGADOR 2 ADIVINHAR \n");
scanf("%d",&num_jogador1);
do{
    printf("Digite o numero entre 0 e 100 \n");
    scanf("%d",&num);
    jogadas= jogadas + 1;
    if (jogadas == 5){
    	printf("Voce chegou a 5 tentativas.");
    	break;
	}
    else if (num>num_jogador1){
        printf("O numero e maior que o valor digitado. \n");
    }
    else if (num<num_jogador1){
        printf("O numero e menor que o valor digitado. \n");
    }
    else{
        printf("Parabens voce acertou o valor e igaul a senha!!! Com %d tentativas \n !!!",jogadas);
        break;
    }
} while(num != num_jogador1 || jogadas != 5);


return 0;
}
