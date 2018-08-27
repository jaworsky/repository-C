#include <stdio.h>
#include <stdlib.h>

//2.	Escribir el programa necesario para calcular la suma de dos números. Mostrar el resultado

int main()
{

int numero1;
int numero2;
int resultado;

printf("Ingrese el numero 1: ");
scanf("%d",&numero1);

printf("Ingrese el numero 2: ");
scanf("%d",&numero2);

resultado=(numero1+numero2);


printf("La suma de los numeros ingresados es: %d",resultado);


    return 0;

}

