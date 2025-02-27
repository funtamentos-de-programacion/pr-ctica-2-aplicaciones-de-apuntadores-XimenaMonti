// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) { // Comparación usando aritmética de punteros
            return (arr + i); // Retorna la dirección de memoria del elemento encontrado
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    int tamaño = sizeof(arr) / sizeof(arr[0]); // Calculamos el tamaño del arreglo
    int valorBuscado;
    printf("Ingrese un número a buscar: ");
    scanf("%d", &valorBuscado);

    int *resultado = buscarElemento(arr, tamaño, valorBuscado);

    if (resultado != NULL) {
        printf("El valor %d se encuentra en la dirección de memoria: %p\n", valorBuscado, (void *)resultado);
    } else {
        printf("El valor %d no se encontró en el arreglo.\n", valorBuscado);
    }


    // Código para buscar un número y mostrar su dirección
    return 0;
}
