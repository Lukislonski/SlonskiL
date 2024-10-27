#include <stdio.h>

int main() {
    int liczba1, liczba2, liczba3;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);

    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba3);

    int najwieksza;

    if (liczba1 >= liczba2 && liczba1 >= liczba3) {
        najwieksza = liczba1;
    } else if (liczba2 >= liczba1 && liczba2 >= liczba3) {
        najwieksza = liczba2;
    } else {
        najwieksza = liczba3;
    }
        printf("Najwieksza liczba to: %d\n", najwieksza);
      
        return 0;
    }