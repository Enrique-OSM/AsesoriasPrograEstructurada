#include <stdio.h>

// Función para calcular el factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Función para calcular las diferencias hacia adelante
void forwardDifferenceTable(float y[], float diffTable[][10], int n) {
    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }
}

// Función para calcular el valor interpolado usando el método de Newton hacia adelante
float newtonForwardInterpolation(float x[], float diffTable[][10], float xp, int n) {
    float h = x[1] - x[0];
    float p = (xp - x[0]) / h;
    float yp = diffTable[0][0];

    for (int i = 1; i < n; i++) {
        float term = p;
        for (int j = 1; j < i; j++) {
            term *= (p - j);
        }
        yp += (term * diffTable[0][i]) / factorial(i);
    }

    return yp;
}

int main() {
    int n;
    printf("Ingrese el número de datos: ");
    scanf("%d", &n);

    float x[10], y[10], diffTable[10][10];

    printf("Ingrese los valores de x: \n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Ingrese los valores de y: \n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }

    forwardDifferenceTable(y, diffTable, n);

    float xp;
    printf("Ingrese el valor de x para interpolar: ");
    scanf("%f", &xp);

    float yp = newtonForwardInterpolation(x, diffTable, xp, n);

    printf("El valor interpolado en x = %.2f es y = %.9f\n", xp, yp);

    return 0;
}