// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tam) {
    // Implementar algoritmo de ordenamiento aquí
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    int tama = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo antes del ordenamiento: ");
    for (int i = 0; i < tama; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    ordenarBurbuja(arr, tama);

    printf("Arreglo después del ordenamiento: ");
    for (int i = 0; i < tama; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
