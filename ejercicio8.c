// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int t = *a;
    *a=*b; // se le asigna el valor de b a a
    *b=t;
}

int main() {
    int arr[] = {5, 10};
    //Para mostrar los valores originiales 
    printf("Valores originales: arr[0]=%d, arr[1]=%d\n",arr[0],arr[1]);
    // Código para llamar a la función y mostrar los valores intercambiados
    intercambiar(&arr[0],&arr[1]);
    printf("Valores intercambiados: arr[0] = %d, arr[1]=%d\n",arr[0],arr[1]);
   
    return 0;
}