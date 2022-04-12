#include <stdio.h>
#include <stdlib.h>

int main()
{
    //inicializamos variables
    int num=0;
    int a=0;

    //pedimos un numero por teclado
    printf("ingrese un numero");
    scanf("%d",&num);

    */algoritmo de verificacion: primero se verifica si el numero es par,
    luego si es multiplo de 3, 5, 7 con esto verificamos por descarte si el numero agregado es primo./*
    if (num <2){
        printf("el numero %d es primo. ");

    }else{

        a= num % 2;

        if(a != 0){
            a= num % 3;

            if(a != 0){
                a=num % 5;

                if(a != 0){
                   a=num % 7;

                   if(a != 0){
                        printf("el numero %d es primo.",num);
                   }else{
                        printf("el numero %d no es primo.",num);
                   }
                }else{
                    printf("el numero %d no es primo.",num);
                }
            }else{
                printf("el numero %d no es primo.",num);
            }
        }else{
            printf("el numero %d no es primo.",num);
        }
    }
}
