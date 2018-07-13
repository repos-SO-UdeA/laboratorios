#include <stdio.h>

void inputVector(int *);
int product(const int *, int);

int main(void) {
    int vIn[3];
    int prod;
    char seguir;
    do {
        printf("Ingrese el vector de 3 elementos: ");
        inputVector(vIn);
        prod = product(vIn,3);
        printf("El producto es: %d\n\n",prod);
        fflush(stdin);
        printf("Desea continuar (y/n)? ");
        scanf("%c",&seguir);
        printf("\n");
    } while(seguir == 'y');
    printf("Suerte es que le digo\n");
    return 0;
}

/**
 *   @brief  Permite ingresar cada uno de los componentes de un vector de 3 elementod
 *
 *   @param  array es el arreglo que se va a ingresar
 *   @return void
 */
void inputVector(int *array) {
    int i;
    for(i = 0;i < 3;i++) {
        scanf("%d",(array + i));
    }
}

/**
 *   @brief  Calcula el producto de los elementos de un array
 *
 *   @param  array es el arreglo a pasar
 *   @param  size es el tamaño del arreglo pasado como argumento
 *   @return el producto de los elementos del vector
 */
int product(const int *array, int size) {
  int p = *array;
  int i;
  for (i = 1; i < size; i++) {
    p = p*(*++array);
  }
  return p;
}
