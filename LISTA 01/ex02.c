#include <stdio.h>
/* Implemente, utilizando funções, um programa que receba do usuário o valor do salário bruto de um funcionário e imprima o valor com descontos de INSS,
FGTS e Plano de Saúde. O programa deve utilizar uma função para calcular cada um dos descontos,
sendo que estas funções devem receber o valor do salário bruto e retornar o valor a ser descontado.
Os valores descontados devem ser:
INSS: 10% do valor bruto
FGTS: 8%
Plano de Saúde: R$100,00        */
float fun_inss(float salario){
	float inss;
	inss = (10.0*salario)/100.0;
	return inss;
}
float fun_fgts(float salario){
	float fgts;
	fgts = (8.0*salario)/100.0;
	return fgts;
}
float fun_plano_de_saude(){
	float plano_de_saude = 100.0;
	return plano_de_saude;
}
 int main (){
    float salario, fgts,inss,x;
    printf("Informe seu salario bruto: \n ");
    scanf("%f",&salario);
    x = salario-fun_inss(salario)-fun_fgts(salario)-fun_plano_de_saude();
    printf("O salario liquido e: %.2f",x);
    return 0;




}

