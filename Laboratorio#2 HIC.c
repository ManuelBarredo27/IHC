/*
                Interaccion humano computadora
                Barredo Prieto Manuel Eduardo
                matricula:1243284

                        Practica #2

Dado un arreglo de números enteros nums y un entero target, implementar una función que regrese los indices
de dos números que sumados den como resultado el target. Asumir que siempre habrá al menos una
solución, y tampoco se puede repetir el mismo elemento más de una vez.
La respuesta se puede regresar en cualquier orden.
public int[] SumaDos(int[] nums, int target) {}
Ejemplo:
Input: nums = [2,7,11,15], target = 18
Output = [1, 2]
*/

#include <stdio.h>
#include <stdlib.h>

int suma(int cadena[],int target)
{
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(i!=j && cadena[i]+cadena[j]==target) //condicion evita repetir el mismo elemento mas de una vez
            {
                printf("output: [%d,%d]",i,j);
                exit(0);                            //necesario para que no se imprima 2 veces la respuesta ([1,2] y [2,1])
            }
    }


}

int main() //tanta informacion y declaracion de variables no era necesario en main, pero haciendo esto logramos manipular por completo los valores sin modificar el codigo
{
    int i,n,x,target;
    printf("Ingrese el tama%co del arreglo: ",164);
    scanf("%d",&n);
    printf("Ingrese el valor del target: ");
    scanf("%d",&target);
    int cadena[n];
    printf("Ingrese los valores de su arreglo separados por enter:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        cadena[i]=x;
    }
    suma(cadena,target);
            //El codigo no esta optimizado para responder que no se encuentra ninguna respuesta dado a la condicion "Asumir que siempre habrá al menos una solución"
}
