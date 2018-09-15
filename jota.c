#include <stdio.h>
#include "jota.h"
//desarrollo de las funciones:
//funciones matematicas:
float funcionmultiplicacion(float op1, float op2)
{
    float resultadomultiplicacion;
    resultadomultiplicacion=op1*op2;
    return resultadomultiplicacion;
}


float funciondivision(float op1, float op2)
{
    float resultadodivision;
    resultadodivision=op1/op2;
    return resultadodivision;
}

float funcionresta(float op1, float op2)
{
    float resultadoresta;
    resultadoresta=op1-op2;
    return resultadoresta;
}

float funcionsuma(float op1, float op2)
{
    float resultadodelasuma;
    resultadodelasuma=op1+op2;
    return resultadodelasuma;
}

float factorialnumero1(float op1)
{
    int local;
    int factorial=1;
    for(local=op1;local>1;local--)
    {
        factorial=factorial*local;
    }
    return factorial;

}

//funcion para validar una edad en rangos maximos y minimos:

int getInt (char msjok[], char msjerror[], int limitemax, int limitemin)

{
int edad;
printf("%s\n", msjok);
scanf("%d",&edad);
while(edad<limitemin || edad>limitemax)
{
    printf("%s\n",msjerror);
    scanf("%d",&edad);
}
return edad;
}

//funcion vectores:

void mostrarVector( int x[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        printf(" %d", x[i]);
    }
    printf("\n\n");
}

//buscar un numero dentro de un vector

int buscarNumero(int vec[], int tam, int valor) // valor a buscar
{
 int indice=-1;

 for(int i=0;i<tam;i++)
 {
     if(vec[i]==valor)
     {
         indice=i;
         break;
     }

 }
    return indice;

}

//
int buscarMayor(int vec[], int tam)
{

int mayor=vec[0]; // el mayor es el primer indice del vector.

for(int i=1;i<tam;i++)
{
    if(vec[i]>mayor)
    {
        mayor=vec[i];
    }

}

return mayor;

}

// con criterio 0 de mayor a menor. y 1 de menor a mayor.

void bubbleSort (char vec[], int size, int criterio)
{
    int j;
    int aux;
    int i;

    if(criterio==0)
    {

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(vec[i]<vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }

    }

    }

    else
    {

     for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }

    }

    }

}

//


