#include <stdio.h>

int main() {
    double liczba1, liczba2;

    //Pobieranie dwoch liczb od uzytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);

    printf("podaj druga liczbe: ");
    scanf("%lf", &liczba2);

    //Obliczanie
    double suma = liczba1 + liczba2;
    double roznica = liczba1 - liczba2;
    double iloczyn = liczba1 * liczba2;

    //Sprawdzenie czy liczba2 jest rozna od 0 podczas dzielenia
    if (liczba2 != 0) {
        double iloraz = liczba1 / liczba2;
        double reszta = (int)liczba1 % (int)liczba2; 
        printf("Wyniki obliczeń:\n");
        printf("Dodawanie: %.2lf\n", suma);
        printf("Odejmowanie: %.2lf\n", roznica);
        printf("Mnozenie: %.2lf\n", iloczyn);
        printf("Dzielenie: %.2lf\n", iloraz);
        printf("Reszta z dzielenia: %.0lf\n", reszta);
    } else {
        printf("Nie mozna dzielic przez zero!\n");
    }
    return 0;
}