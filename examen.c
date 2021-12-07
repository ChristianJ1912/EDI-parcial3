/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:

    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;

    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;

    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.

    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.

        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>

#include<stdio.h>
#define m 30

typedef struct
{
  char nombre[40];
  char pais[25];
}DatosPersonales;

typedef struct
{
  DatosPersonales datos;
  char deporte[30];
  int numMedallas;
}Deportista;

void Leerarchivo(FILE archivo);
void medallas(FILE archivo);

int main()
{
    FILE *archivo;
    archivo = fopen("deportistas.txt", "r");
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitación", "Esgrima"};
}

void Leerarchivo(FILE archivo);
{
    int i, medallas;
    char nombre[m], pais[m], deporte[m];

    arch = fopen("deportistas.txt", "r");

    for(i=0; i<16; i++)
    {
        fscanf(archivo, "%s", nombre);
        fscanf(archivo, "%s", pais);
        fscanf(archivo, "%s", deporte);
        fscanf(archivo, "%d", &medallas);
    }
}

void medallas(FILE archivo)
{
    int i, medallas, mnatacion, matletismo, mciclismo, mgimnasia, mequitacion, mesgrima;
    char deporte[m];

    for(i=0; i<16; i++)
    {

        fscanf(archivo, "%s", deporte);
        fscanf(archivo, "%d", &medallas);

        if(deporte = 'Natación')
        {
            mnatacion =+ medallas;
        }
        else
        {
            if(deporte = 'Atletismo')
            {
                deporte[1][1] =+ medallas;
            }
            else
            {
                if(deporte = 'Ciclismo')
                {
                   matletismo =+ medallas;
                }
                else
                {
                     if(deporte = 'Gimnacia')
                     {
                         mgimnasia =+ medallas;
                     }
                     else
                     {
                         if(deporte = 'Equitación')
                         {
                              mequitacion =+ medallas;
                         }
                         else
                         {
                              mesgrima =+ medallas;
                         }
                     }
                }
            }
        }
    }
    printf("El numero de medallas en %s son %c", deporte[0][0], mnatacion);
    printf("El numero de medallas en %s son %c", deporte[1][0], matletismo);
    printf("El numero de medallas en %s son %c", deporte[2][0], mciclismo);
    printf("El numero de medallas en %s son %c", deporte[3][0], mgimnacia);
    printf("El numero de medallas en %s son %c", deporte[4][0], mequitacion);
    printf("El numero de medallas en %s son %c", deporte[5][0], mesgrima);

}

