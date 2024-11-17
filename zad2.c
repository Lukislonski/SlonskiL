#include <stdio.h>

    int main() {
        unsigned int a, b;
        unsigned long long result = 1;

    printf("Podaj dwie liczby naturalne (a i b):\n");
    printf("a: ");
    scanf("%u", &a);
    printf("b: ");
    scanf("%u", &b);

    for (unsigned int i = 0; i < b; i++) {
        result *= a;
    }

    printf("%u do potęgi %u to: %llu\n", a, b, result);

    return 0;
}
