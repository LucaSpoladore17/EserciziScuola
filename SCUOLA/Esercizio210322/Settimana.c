#include <stdio.h>  
int main()  
{  
    int Giorno;   
    printf("Inserisci il giorno della settimana in numero:");   
    scanf("%d",&Giorno);     
    switch (Giorno)
    {
    case 1:
    printf("Lunedì\n"); break;
    case 2:
    printf("Martedì\n"); break;    
    case 3:
    printf("Mercoledì\n"); break;
    case 4:
    printf("Giovedì\n"); break;
    case 5:
    printf("Venerdì\n"); break;
    case 6:
    printf("Sabato\n"); break;
    case 7:
    printf("Domenica\n"); break;
    }
    if(Giorno>=8)
    {
        printf("Il Numero inserito non è un giorno della settimana\n"); 
    }
}  