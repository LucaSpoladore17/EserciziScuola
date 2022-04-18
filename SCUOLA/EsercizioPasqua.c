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
    }
    else
    printf("Il numero inserito è minore di 3\n");
return 0;
}