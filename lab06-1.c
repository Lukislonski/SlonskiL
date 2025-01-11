#include <stdio.h>

double dodaj(double a, double b) {
    return a + b;
}

double odejmij(double a, double b) {
    return a - b;
}

double mnoz(double a, double b) {
    return a * b;
}

double dziel(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("\nBlad: Nie mozna dzielic przez zero!\n");
        return 0;
    }
}

int main() {
    double liczba1, liczba2, wynik;
    int wybor;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &liczba2);

    printf("\nWybierz dzialanie:\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("Twoj wybor: ");
    scanf("%d", &wybor);

    switch (wybor) {
        case 1:
            wynik = dodaj(liczba1, liczba2);
            printf("\nWynik dodawania: %.2f\n", wynik);
            break;
        case 2:
            wynik = odejmij(liczba1, liczba2);
            printf("\nWynik odejmowania: %.2f\n", wynik);
            break;
        case 3:
            wynik = mnoz(liczba1, liczba2);
            printf("\nWynik mnozenia: %.2f\n", wynik);
            break;
        case 4:
            wynik = dziel(liczba1, liczba2);
            if (liczba2 != 0) {
                printf("\nWynik dzielenia: %.2f\n", wynik);
            }
            break;
        default:
            printf("\nBlad: Wybrano nieprawidlowa opcje!\n");
            break;
    }

    return 0;
}
