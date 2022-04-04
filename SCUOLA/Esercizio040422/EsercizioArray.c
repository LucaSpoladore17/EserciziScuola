#include <stdio.h>
int main()
{
    printf("Inserisci 10 numeri: ");
    int indice=10;
    int v[indice];
    int tmp=0;
    for(int i =0;i<indice;i++)
    {
        scanf("%d",&tmp);
        v[i]=tmp;
    }
    printf("\n");
    printf("numeri pari: ");
    for (int i= 0; i<indice;i++)
    {
        if(v[i]%2==0){
            printf("%d\n",v[i]);
        }
    }
    printf("Numeri dispari: ");
    for (int i= 0; i<indice;i++)
    {
        if(v[i]%2!=0){
            printf("%d\n",v[i]);
        }
    }
    return 0;   
}