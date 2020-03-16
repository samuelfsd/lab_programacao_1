#include <stdio.h>
/*7. Faça um programa que obtenha o dia da retirada e o dia da entrega de um livro de uma biblioteca
e em seguida calcule quantos dias o livro ficou emprestado.
Caso o livro tenha ficado emprestado por mais de 15 dias,
o programa deve calcular e exibir o valor da multa (R$ 2.50 por dia de atraso)
*/
int main(){

int dia_retirada,dia_entrega,dias_livro_emprestado,dias_de_atraso;
float multa;

printf("Informe o dia de Retirada do livro \n");
scanf("%d",&dia_retirada);
printf("Informe o dia de Entrega do livro \n");
scanf("%d",&dia_entrega);
dias_livro_emprestado = (dia_entrega - dia_retirada);
if (dias_livro_emprestado > 15){
    dias_de_atraso = dias_livro_emprestado - 15;
    multa = 2.50 * dias_de_atraso;
    printf("\nO valor da multa e %.2f",multa);
}
else{
	printf("Voce nao pagara multa.");
}
return 0;

}
