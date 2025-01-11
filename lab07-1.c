#include <stdio.h>

unsigned long long silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * silnia(n - 1);
}

int main() {
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("Silnia jest zdefiniowana tylko dla liczb nieujemnych.\n");
    } else {
        printf("%d! = %llu\n", liczba, silnia(liczba));
    }

    return 0;
}