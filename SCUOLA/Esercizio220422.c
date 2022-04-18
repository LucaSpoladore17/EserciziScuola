#include <stdio.h>
int main()
{
    int numero;
    printf("Inserire un numero da tastiera: ");
    scanf("%d",&numero); 
    if (numero>=3)
    {
        if(numero==3)
        {
            printf("***\n");
            printf("* *\n");
            printf("***\n");
        }
        if(numero==4)
        {
            printf("****\n");
            printf("*  *\n");
            printf("*  *\n");
            printf("****\n");  
        }
        if(numero==5)
        {
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");  
        }
        if(numero==6)
        {
            printf("******\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("******\n");  
        }
        if(numero==7)
        {
            printf("*******\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*******\n");  
        }
        if(numero==8)
        {
            printf("********\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("********\n");  
        }
        if(numero==9)
        {
            printf("*********\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*********\n");  
        }
        if(numero==10)
        {
            printf("**********\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("**********\n");  
        }
    }
    if(numero>10)
    printf("Il numero inserito è maggiore di 10, inserire un numero compreso tra 3 e 10\n");
    if(numero<3)
    printf("Il numero inserito è minore di 3, inserire un numero compreso tra 3 e 10\n");
return 0;
}