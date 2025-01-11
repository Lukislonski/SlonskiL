#include <stdio.h>

void wypiszLiczby(int n) {
    if (n > 0) {
        wypiszLiczby(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    wypiszLiczby(n);

    return 0;
}