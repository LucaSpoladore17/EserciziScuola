#include <stdio.h>
int main()
{
    int voto;
    printf("Inserire il voto positivo o negativo: \n");
    scanf(voto);
    //creo due controlli per capire se il numero inserito è minore di 0
    if(voto<0)
    printf("Il voto inserito  è Negativo\n");
    //creo due controlli per capire se il numero inserito è maggiore uguale a 0
    if(voto>=0)
    printf("Il voto inserito è Positivo\n");
}