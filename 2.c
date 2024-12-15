#include <stdio.h>

int main() {
    int array[10];
    int *ptr = array;

    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numer %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    printf("\nPodane liczby to:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numer %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
