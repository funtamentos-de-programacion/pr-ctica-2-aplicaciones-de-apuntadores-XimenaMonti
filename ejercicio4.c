#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  
  printf("Valores originales:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", *(ptr + i));  
    //Escribe el codigo para imprimir los valores usado el apuntador
  }
  
  for (int i = 0; i < 5; i++) {
    *(ptr + i) *= 2;// Duplicar cada elemento

  }
  
  printf("\nValores modificados:\n");
  for (int i = 0; i < 5; i++) {
    //Escribe el codigo para imprimir los valores usado el apuntador
    printf("%d ", *(ptr + i));
  }
  return 0;
}
