#include <stdio.h>
/* Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais;
se a média nessas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto.
Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerando-se essa terceira nota e a maior das notas entre P1 e P2.
Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0. Escreva um programa que leia inicialmente as duas notas de um aluno,
fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova,
também fornecida via o teclado. Como saída, o programa deve imprimir a média final do aluno, seguida da mensagem "Aprovado" ou "Reprovado",
conforme o critério descrito acima.
*/
int main (){
float p1,p2,p3,media;
printf("Informe a sua nota 1: ");
scanf("%f",&p1);
printf("Informe a sua nota 2: ");
scanf("%f",&p2);
media = (p1+p2)/2;
if (media>=5 && p1>=3 && p2>=3){
        printf("Sua media e %5.2f. Aprovado",media);
}
else{
         printf("Voce ira fazer uma terceira nota pois nao obteve a media esperada. \n");
         printf("Qual a sua terceira nota:\n ");
         scanf("%f",&p3);
         if (p1>p2){
         media = (p1+p3)/2;
             if (media>=5){
                printf("Sua media final e %.2f. Aprovado",media);
                          }
             else{
                printf("Sua media final e %.2f. Reprovado", media);
                 }
                   }
        else{
        media = (p2+p3)/2;
            if (media>=5){
                printf("Sua media e %.2f. Aprovado",media);
                         }
             else{
                printf("Sua media e %.2f. Reprovado",media);
                 }
           }

}
return 0;

}
