#include <stdio.h>
#include <stdlib.h>


/*3.	Escribir  un programa que realice las siguientes acciones
•	Limpie la pantalla // preguntar por libreria o como hacerlo
•	Asigne a 2 variables numero1 y numero2 valores distintos de cero
•	Efectúe el producto de dichas variables
•	Muestre el resultado pos pantalla
•	Obtenga el cuadrado de numero1 y lo muestre par pantalla
*/

int main()
{

//numero = rand () % 11 + 20;  // Este está entreo 20 y 30


int numero1;
int numero2;
int producto;
int elcuadradodelnumero1;

srand (getpid()); // reinicia el random

numero1=rand() %10 +1; // numero random del 1 al 10

numero2=rand() %10 +1;

printf("%d \n%d",numero1,numero2);


producto=(numero1*numero2);

printf("\nEl resultado es: %d",producto); // multiplicacion d numeros randoms


elcuadradodelnumero1=numero1*numero1;

printf("\nEl cuadrado del numero 1 es: %d",elcuadradodelnumero1);


return 0;




}

