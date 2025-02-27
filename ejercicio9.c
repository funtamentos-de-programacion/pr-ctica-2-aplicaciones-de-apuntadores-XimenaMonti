// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += *(arr + i); // Acceder a cada elemento usando aritmética de punteros
    }
    // Implementar la suma aquí
    return suma;
}
   

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); // Calculamos el tamaño del arreglo

    int resultado = sumaArreglo(numeros, tamaño); // Llamamos a la función

    printf("La suma del arreglo es: %d\n", resultado); 

    return 0;
}
