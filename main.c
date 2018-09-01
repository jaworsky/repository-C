#include <stdio.h>
#include <stdlib.h>

// instalar linux
// system("clear");
// include <stdio_exth>
// __fpurge(stdin); para limpiar el bufer en linux


int main()
{

    int flag;
    int opcion;


    do
    {


    printf("1. Ingresar 1er operando \n2. Ingresar 2do operando \n");
    getchar(); // pide un caracter para continuar
    printf("Ingrese una opcion del menu: \n");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
        //ingresar numero();
        break;

        case 2:
        //ingresar numero();
        break;

        case 5:
        //SALIR
        flag=0;

        default:
        printf("Ingrese una opcion valida! \n");

    }



    }while(flag !=0);






    return 0;
}
