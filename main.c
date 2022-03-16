#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int a=0;

    printf("ingrese un numero");
    scanf("%d",&num);


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
