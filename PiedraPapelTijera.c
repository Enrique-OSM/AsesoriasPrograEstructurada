#include<stdio.h>

int main(){
    int j,m;
    printf("Turno Maestro");
    scanf("%i", &m);
    printf("Turno Jugador");
    scanf("%i", &j);
    printf("j= %i", j);
    printf("m= %i", m);
    if(j==1 && m==2){
        printf("hola");
    }
}