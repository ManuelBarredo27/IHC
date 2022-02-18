/*
                Interaccion humano computadora
                Barredo Prieto Manuel Eduardo
                matricula:1243284



                        Practica #1

    Dado un arreglo de números enteros nums, para cada elemento nums[ i ] encontrar cuántos números en el
    arreglo son menores que dicho elemento. Regresar el resultado en un arreglo.
    Ejemplo.
    Input: nums = [8,1,2,2,3]
    Output: [4,0,1,1,3]

*/
#include <stdio.h>
#include <stdlib.h>

int funcion(int array[],int tamano)
{
    int i,j,contador=0;
    int aux[tamano];
    printf("Los resultados son:\n");
    for(i=0;i<tamano;i++)
    {
        for(j=1;j<tamano;j++)
        {
            if(array[i]>array[j])
            contador++;
        }
        aux[i]=contador;
        printf("%d",aux[i]);
        contador=0;
    }
}

 int main()
 {
     int i,x,n;
     printf("Ingrese el tamano del arreglo: ");
     scanf("%d",&n);
     int array[n];
     printf("Ingrese los valores de su arreglo separados por enter:\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&x);
        array[i]=x;
     }
        funcion(array,n);
 }
