#include <stdio.h>
/*1. Fa�a um programa que calcule e imprima a m�dia ponderada de um aluno. Inicialmente, o programa dever� ler o peso da primeira prova e o peso da segunda prova
(ambos inteiros).
A seguir, o programa dever� ler os seguintes dados do aluno: matr�cula (inteiro), nota da primeira prova e nota da segunda prova (ambas reais).
Por �ltimo, o programa deve mostrar a matr�cula do aluno seguida da sua m�dia. O seu programa deve, obrigatoriamente, utilizar a seguinte fun��o feita por voc�:
fun��o calcula_media_ponderada(): recebe 2 notas (reais) e seus respectivos pesos (inteiros) como par�metros e retorna a m�dia ponderada dos valores.*/

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
