#include <stdio.h>
#include <stdlib.h>

/* 6.  	Escribir un programa que realice las siguientes acciones:
•	Limpie la pantalla
•	Declare 2 variables y les asigne sendos valores
•	Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor que cero o "Resultado negativo" si es menor que cero
*/


int main()
{



int numero1;
int numero2;
int restadevariables;


system("cls");//limpia la pantalla

printf("Ingrese el numero 1: ");
scanf("%d",&numero1);

printf("Ingrese el numero 2: ");
scanf("%d",&numero2);

restadevariables=numero1-numero2;

printf("%d \n",restadevariables);

if(restadevariables>0) // if else if else funcionando ok.
{
    printf("Resultado positivo");

}
else if(restadevariables<0)
{
    printf("Resultado negativo");

}
else
{
    printf("Es cero");
}




    return 0;



}
