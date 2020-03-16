#include <stdio.h>
/*8. Faça as seguintes alterações no jogo da senha (exercício 7):
a) se o valor digitado em uma tentativa tiver uma diferença igual a 1 para a senha, o programa deve avisar que “TÁ QUENTE!”.
Neste caso, nenhuma outra mensagem deve ser emitida. Nos demais casos, continuam valendo as mensagens exibidas no exercício anterior.
Exemplos:
senha 43 e valor digitado 42 : TÁ QUENTE!!!
senha 43 e valor digitado 44 : TÁ QUENTE!!!;
b) Ao final do jogo, se for o caso, enviar a mensagem “Você perdeu. Tente novamente depois”;
c) Não permita que o jogador 1 digite valores fora da faixa esperada (entre 0 e 100);
d) Ao final de uma partida, permita ao usuário jogar novamente.*/
void fun_jogo_da_adivinhacao(){
int num,num_jogador1,jogadas = 0;
printf("Digite o numero JOGADOR 1 para JOGADOR 2 ADIVINHAR \n");
scanf("%d",&num_jogador1);
if (num_jogador1>100){
    printf("Voce nao pode ditigar valores superiores a 100.\n Por favor digite novamente valores entre 0 e 100");
}
do{
    printf("Digite o numero entre 0 e 100 \n");
    scanf("%d",&num);
    jogadas= jogadas + 1;
    if (jogadas == 5){
    	printf("Voce chegou a 5 tentativas. \n");
    	printf("Voce perdeu. Tente novamente depois. \n");
	}
	else if (num_jogador1-num == 1 || num-num_jogador1 == 1){
        printf("TA QUENTE !!! \n");
	}
    else if (num>num_jogador1){
        printf("O numero e maior que o valor digitado. \n");
    }
    else if (num<num_jogador1){
        printf("O numero e menor que o valor digitado. \n");
    }
    else{
        printf("Parabens voce acertou o valor e igaul a senha!!! Com %d tentativa \n !!!",jogadas);
    }
} while(num != num_jogador1 && jogadas != 5);

}
int main(){
fun_jogo_da_adivinhacao();
int repetir;
printf("Se quiser jogar novamente digite 1-SIM | 2-NAO \n "); 	 //	ESQUECI COMO Q FAZ PRA FICAR REPETINDO SEMPRE PARA REPETIR A PERGUNTA SE QUER JOGAR DE NOVO 
scanf("%d",&repetir);
if (repetir == 1){
	fun_jogo_da_adivinhacao();
}
}

