#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3
typedef struct{
    float precio ;
    char codigo[7];
}Producto;

int getPrecio(char *mensaje,float *elPrecio);
int getCodigo(char *mensaje,char *codigo);


typedef struct{
    float precio ;
    char codigo[7];
}Alumno;
typedef struct{
    float precio ;
    char codigo[7];
}Casa;

typedef struct{
    int edad ;
    char nombre[7];
    char raza[7];
}Perro;


/** \brief
 * vamos aadministrar los productos de un comercio
 * cod 6 caracteres
 *  precio

 * \return int
 *
 *
 */
int main()
{

    float precios[TAMANIO] ;
    char codigos[TAMANIO][7];
    //char codigos[7][TAMANIO];
    int minumero;
    Producto unProducto;
    Producto ArrayDeProductos[TAMANIO];
    Perro miPerro;

    int i;
    int j;
/*
    printf("codigo:%s precio: %f \n",unProducto.codigo,unProducto.precio);

       while(getPrecio("ingrese precio  , por fa!!!",&unProducto.precio)==0){
        printf("error ...");
       }
        while(getCodigo("ingrese Codigo  , por fa!!!",unProducto.codigo)==0){
        printf("error ...");
       }
*/

     for(i=0;i<TAMANIO;i++)
    {
        // con array de estructuras
       while(getPrecio("ingrese precio  , por fa!!!",&ArrayDeProductos[i].precio)==0){
        printf("error ...");
       }
        while(getCodigo("ingrese Codigo  , por fa!!!",ArrayDeProductos[i].codigo)==0){
        printf("error ...");
       }
        /*
        // con arrays paralelos
       while(getPrecio("ingrese precio  , por fa!!!",&precios[i])==0){
        printf("error ...");
       }

         while(getCodigo("ingrese Codigo  , por fa!!!",codigos[i])==0){
        printf("error ...");
       }*/

    }

    for(i=0;i<TAMANIO;i++)
    {
      //  printf("codigo:%s precio: %f \n",codigos[i],precios[i]);
       printf("codigo:%s precio: %f \n",ArrayDeProductos[i].codigo,ArrayDeProductos[i].precio);
    }

    for(i=0;i<TAMANIO;i++)
    {
        for(j=0;j<TAMANIO;j++)
        {
            if(ArrayDeProductos[i].precio<ArrayDeProductos[j].precio)
            {
                Producto aux=ArrayDeProductos[i];
                ArrayDeProductos[i]=ArrayDeProductos[j];
                ArrayDeProductos[j]=aux;
            }
            /*
            //arrays paralelos, debo ordenar cada elemento
              if(precios[i]<precios[j])
            {
                int aux=precios[i];
                precios[i]=precios[j];
                precios[j]=aux;

                char auxCo[7];
                strcpy(auxCo,codigos[i]);
                strcpy(codigos[i],codigos[j]);
                strcpy(codigos[j],auxCo);

            }*/
        }
    }
     printf("\n\n \t\tordenado \n\n");


    for(i=0;i<TAMANIO;i++)
    {
        //printf("codigo:%s precio: %f \n",codigos[i],precios[i]);
          printf("codigo:%s precio: %f \n",ArrayDeProductos[i].codigo,ArrayDeProductos[i].precio);

    }
    printf("De array a estruturas \n");
    return 0;
}
int getCodigo(char *mensaje,char *codigo)
{
    char ingreso[50];
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    if( strlen(ingreso)==6)
    {
        strcpy(codigo,ingreso);
        retorno=1;
    }
    return retorno;

}
int getPrecio(char *mensaje,float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    auxPrecio=atof(ingreso);
    if(auxPrecio>0)
    {
      *elPrecio  = auxPrecio;
      retorno= 1;
    }
    return retorno;

}
