//robot parte manzanas
#include<stdio.h>

int main(){
    //tipo nombre = valor(opcional)
    for (int i = 1; i < 12; i++)//declaras tu inicio; Condicionas tu final; i++ i=i+1
    {
        printf("PARTE LA MANZANA %i \n",i);
    }
    int muerte=0;
    int Salto;
    while (muerte==0)
    {
        printf("------");
        do
        {
            printf("salta");
            scanf("%i", &Salto);            
        } while (Salto != 1 && Salto != 0);
        

        if(Salto==1){
            printf("pip");
        }
        else
        {
            printf("te caiste");
            muerte=1;
        }
        
    }
    
}