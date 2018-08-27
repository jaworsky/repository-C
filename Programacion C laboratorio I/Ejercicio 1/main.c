#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero1;  //int=variable entera.
    int numero2;
    int numero3;
    float promedio;  // float para decimales. // char para caracteres

    printf("Ingrese un numero 1: "); //pedimos un numero.
    scanf("%d",&numero1); //guardamos el numero que pedimos en la memoria, siempre"&d& por numero decimal y &para la direccion de memoria.

    printf("Ingrese el numero 2: ");
    scanf("%d", &numero2);

    printf("Ingrese el numero 3: ");
    scanf("%d",&numero3);


    //entonces casteamos el promedio para solucionarlo.
    promedio=(float) (numero1+numero2+numero3)/3; // la maquina deduce que al hacer una operacion con 3 enteros, el resultado es entero
                                            // por mas q la variable haya sido declarada como float.
    printf("El promedio es: %f",promedio);


    return 0;

}
