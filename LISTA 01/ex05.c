#include <stdio.h>
/*5. Escreva um programa que leia três valores e apresente-os na tela em ordem crescente.
*/
int main (){
int p1,p2,p3;
printf("Informe 3 numeros: ");
scanf("%d%d%d", &p1, &p2, &p3);
if (p1<p2 && p1<p3){
        if(p2<p3)
        printf("%d - %d - %d",p1,p2,p3);
        else
        printf("%d - %d - %d",p1,p3,p2);
}
if (p2<p1 && p2<p3){
    if (p1<p3)
    printf("%d - %d - %d",p2,p1,p3);
    else
    printf("%d - %d - %d",p2,p3,p1);
}
if (p3<p1 && p3<p2){
    if (p1<p2)
    printf("%d - %d - %d",p3,p1,p2);
    else
    printf("%d - %d - %d",p3,p2,p1);
}
return 0;

}
