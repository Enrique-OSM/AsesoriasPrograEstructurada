//piedra papel o tijera 
#include<stdio.h>

int main(){
    int Jugador, Maestro=3;
    printf("ingrese Piedra 1 papel 2 tijeras 3");
    printf("jugada del Jugador");
    scanf("%i", &Jugador);
    if (Jugador==1)
    {
        // Primer SI de Raptor
        printf("Gano");
    }else if(Jugador==3){ // Primer NO de raptor
        printf("empate");
    }else{
        printf("perdio");
    }
    return 0;
}