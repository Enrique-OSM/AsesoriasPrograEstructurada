/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */
#include <stdio.h>

int main(){
    for (int i = 1; i < 101; i++) //declaracion; Limiete; Incremento
    {
        if(i%3==0){
            printf("fizz \n");
            continue;
        }
        if(i%5==0){
            printf("Buzz \n");
            continue;
        }
        
        if(i%3==0 && i%5==0){
            printf("Fizz Buzz \n");
            continue; // te perimite pasar a la siguiente iteracion i++ 
        }   
        printf(" %i\n",i);
    }
    return 0;
}