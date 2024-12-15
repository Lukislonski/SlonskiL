#include <stdio.h>

void sortAscending(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 6, y = 2, z = 8;

    printf("Przed sortowaniem: x = %d, y = %d, z = %d\n", x, y, z);

    sortAscending(&x, &y, &z);

    printf("Po sortowaniu: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
