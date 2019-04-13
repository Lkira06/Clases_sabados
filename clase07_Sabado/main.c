#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define TAMANIO 3

int main()
{
    float precios[TAMANIO];//Definir array para el precio
    char codigos[TAMANIO][7];//Array de palabras. 3 elementos de 7 de largo cada uno
    int i;
    int j;
    int respuesta;
    char ingreso[7];

    printf("Ingrese cadena");
    scanf("%s",ingreso);

    respuesta = strlen(ingreso);
    printf("Cantidad de caracteres ingreso: %d",respuesta);

    respuesta =strlen("lalala");
    printf("Cantidad de caracteres lalala: %d",respuesta);

    for(i=0;i<TAMANIO;i++)//cargar en forma secuencial
    {
        while(getPrecio("Ingrese precio, por fa!!",&precios[i]) ==0)
        {
            printf("Error, ingrese precio");
        }
        while(getCodigo("Ingrese codigo, por fa!!",codigos[i])==0)
        {
            printf("Error, ingrese precio");
        }

    }
    for(i=0;i<TAMANIO;i++)
    {
        printf("Codigo: %s precio : %f \n",codigos[i],precios[i]);
    }

    for(i=0;;)
    {
        for(j=0;;)
        {
            if(precios[i]<precios[j])//criterio de acomodo
            {
                int aux = precios[i];
                precios[i] = precios[j];
                precios[j] = aux;

                char auxCodigo[7];
                strcpy(auxCodigo,codigos[i]);
                strcpy(codigos[i],codigos[j]);
                strcpy(codigos[j],auxCodigo);
            }
        }
    }

    printf("De array de estructuras \n");
    return 0;
}
