#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {
  short arr[5] ={1,2, 3, 4, 5}, *apArr;//Apunta a la primera posición del arreglo
  apArr = &arr[0];
  // imprime la dirección de memoria del arreglo en la posición [0]
  printf("Dirección del arreglo en la primera posición: %p\n",&apArr[0]);

  // imprime la dirección de memoria del arreglo  (el nombre del arreglo es un apuntador)
  printf("Dirección del arreglo: %p\n",&apArr);

  // imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Dirección almacenada en el apuntador: %x\n",*apArr);


  printf("*apArr = %i\n",*apArr);
  // suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n",*(apArr+1));// segundo elemento del arreglo
  printf("*(apArr+2) = %i\n",*(apArr+2));// tercer elemento del areglo
  printf("*(apArr+3) = %i\n",*(apArr+3));
  printf("*(apArr+4) = %i\n",*(apArr+4));
 // Escribe una línea de código para mostrar el valor apuntado por apArr
 
  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i<5; i++){
    printf("Elemento %d: %d\n", i, *(apArr +i)); 
  }
  //Modifica apArr para que apunte al tercer elemento
  apArr=&arr[4];

  //Accede al elemento con indice -2 usando el apuntador
  printf("Elemento -2: %d\n", *(apArr-2));
  printf("Elemento -2: %d\n",apArr[0]);
  //Ajusta el ciclo for para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }
  return 0;
}
