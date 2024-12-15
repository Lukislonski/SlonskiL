#include <stdio.h>

int findAndReplaceMax(int *array, int size) {
    if (size <= 0 || array == NULL) {
        return -1;
    }

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    int maxValue = array[maxIndex];
    array[maxIndex] = 0;

    return maxValue;
}

int main() {
    int array[] = {3, 5, 9, 2, 8};
    int size = sizeof(array) / sizeof(array[0]);

    int maxValue = findAndReplaceMax(array, size);
    printf("Największy element: %d\n", maxValue);

    printf("Tablica po zmianie: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
