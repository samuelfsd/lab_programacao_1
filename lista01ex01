#include <stdio.h>
/*1. Faça um programa que calcule e imprima a média ponderada de um aluno. Inicialmente, o programa deverá ler o peso da primeira prova e o peso da segunda prova
(ambos inteiros).
A seguir, o programa deverá ler os seguintes dados do aluno: matrícula (inteiro), nota da primeira prova e nota da segunda prova (ambas reais).
Por último, o programa deve mostrar a matrícula do aluno seguida da sua média. O seu programa deve, obrigatoriamente, utilizar a seguinte função feita por você:
função calcula_media_ponderada(): recebe 2 notas (reais) e seus respectivos pesos (inteiros) como parâmetros e retorna a média ponderada dos valores.*/

float calcula_media_ponderada (float a,float b,float  c,float  d){
	float media;
	media = ((a*c)+(b*d))/(c+d);
	return media;
}

int main (void){
	int matricula;
	float nota1, nota2, peso1, peso2, media;
	printf ("Informe o peso da primeira nota:  ");
	scanf ("%f",&peso1);
	printf ("Informe o peso da segunda nota: ");
	scanf ("%f",&peso2);
	printf("Informe a sua matricula: ");
	scanf("%d",&matricula);
	printf ("Informe a sua 1 Nota: ");
	scanf ("%f",&nota1);
	printf ("Informe a sua 2 Nota: ");
	scanf ("%f",&nota2);
	media = calcula_media_ponderada(nota1,nota2,peso1,peso2);
	printf("A sua matricula e: %d \n",matricula);
	printf ("Sua media ponderada e:%.2f \n  ",media);

	return 0;
}
