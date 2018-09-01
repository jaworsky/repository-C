#include <stdio.h>
#include <stdlib.h>


/*
11.   Escribir un programa que realice lea por teclado 20 caracteres. Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
*/



int main()
{

  char caracteringresado;
  int cuantasa=0;
  int cuantase=0;
  int cuantasi=0;
  int cuantaso=0;
  int cuantasu=0;
  int contador=0;


  while(contador<5)
  {


    printf("\nIngrese un caracter: ");
    scanf("%c",&caracteringresado);

    contador=contador+1;
    __fpurge(stdin); // siempre abajo de cada scan
    //si fuera windows fflush(stdin);


    switch(caracteringresado)
    {

    case 'a':
    cuantasa=cuantasa+1;
    break;

    case 'e':
    cuantase=cuantase+1;
    break;

    case 'i':
    cuantasi=cuantasi+1;
    break;

    case 'o':
    cuantaso=cuantaso+1;
    break;

    case 'u':
    cuantasu=cuantasu+1;



    }





  }


printf("La cantidad de a es: %d\n",cuantasa);
printf("La cantidad de e es: %d\n",cuantase);
printf("La cantidad de i es: %d\n",cuantasi);
printf("La cantidad de o es: %d\n",cuantaso);
printf("La cantidad de u es: %d\n",cuantasu);




    return 0;
}
