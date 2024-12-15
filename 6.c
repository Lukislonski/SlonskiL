#include <stdio.h>

void fillArray(int *start, int *end) {
    int n = end - start + 1;

    for (int i = 0; i < n; i++) {
        start[i] = i + 1;
    }
}

int main() {
    int array[10];

    fillArray(&array[0], &array[9]);

    printf("Tablica: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
