#include <stdio.h>

int main() {
    int liczba1, liczba2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);

    if (liczba1 > liczba2) {
        printf("Wieksza liczba to: %d\n", liczba1);
    } else if (liczba2 > liczba1) {
        printf("Wieksza liczba to: %d\n", liczba2);
    } else {
        printf("Obie liczby sa rowne: %d\n", liczba1);
    }
    return 0;
    }
