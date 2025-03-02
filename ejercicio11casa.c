// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tam, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tam; i++) {
        if (*(arr + i) == valor) {
            return arr + i;
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tama = sizeof(arr) / sizeof(arr[0]);
    int valor = 30;
    // Código para buscar un número y mostrar su dirección
    int *direccion = buscarElemento(arr, tama, valor);
    if (direccion != NULL) {
        printf("El valor %d se encuentra en la dirección de memoria: %p\n", valor, (void*)direccion);
    } else {
        printf("El valor %d no se encuentra en el arreglo.\n", valor);
    }
    return 0;
}
