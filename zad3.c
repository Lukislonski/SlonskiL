#include <stdio.h>
#include <math.h>

    int main() {
        double a, b;
        int c = 0;

    printf("Podaj liczbe a: ");
    scanf("%lf", &a);
    printf("Podaj liczbe b: ");
    scanf("%lf", &b);

    if (a <= 1 && b >= 1) {
        printf("Dla a <= 1 i b >= 1 nie istnieje c takie, ze a^c > b.\n");
        return 0;
    }

    while (pow(a, c) <= b) {
        c++;
    }

    printf("Pierwsze c takie, ze %.2f^c > %.2f to c = %d\n", a, b, c);

    return 0;
}
