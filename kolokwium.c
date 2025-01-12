#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 20

int n = 0;

void wyswietl_tablice(char tablica[]) {
    if (n == 0) {
        printf("Tablica jest pusta.\n");
    } else {
        printf("Elementy tablicy: ");
        for (int i = 0; i < n; i++) {
            printf("%c ", tablica[i]);
        }
        printf("\n");
    }
}

void dodaj_element(char tablica[]) {
    if (n < MAX_SIZE) {
        char znak;
        printf("Podaj cyfrę do dodania: ");
        scanf(" %c", &znak);

        if (isdigit(znak)) {
            tablica[n] = znak;
            n++;
            printf("Cyfra '%c' została dodana.\n", znak);
        } else {
            printf("Błąd: Podany znak nie jest cyfrą.\n");
        }
    } else {
        printf("Tablica jest pełna. Nie można dodać nowego elementu.\n");
    }
}

void usun_element(char tablica[]) {
    int indeks;
    printf("Podaj indeks elementu do usunięcia: ");
    scanf("%d", &indeks);

    if (indeks >= 0 && indeks < n) {
        for (int i = indeks; i < n - 1; i++) {
            tablica[i] = tablica[i + 1];
        }
        n--;
        printf("Element na indeksie %d został usunięty.\n", indeks);
    } else {
        printf("Błąd: Indeks poza zakresem.\n");
    }
}

int suma_kwadratow(char tablica[]) {
    if (n == 0) {
        return -1;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += (tablica[i] - '0') * (tablica[i] - '0');
    }
    return suma;
}

int main() {
    char tablica[MAX_SIZE];
    char wybor;

    while (1) {
        printf("\nWybierz operację:\n");
        printf("e. Zakończ\n");
        printf("w. Wypisz elementy tablicy\n");
        printf("d. Dodaj nowy element\n");
        printf("u. Usuń element\n");
        printf("s. Suma kwadratow\n");
        printf("Wybór: ");
        scanf(" %c", &wybor);

        switch (wybor) {
            case 'e':
                printf("Zakończenie programu.\n");
                return 0;
            case 'w':
                wyswietl_tablice(tablica);
                break;
            case 'd':
                dodaj_element(tablica);
                break;
            case 'u':
                usun_element(tablica);
                break;
            case 's': {
                int suma = suma_kwadratow(tablica);
                if (suma == -1) {
                    printf("Tablica jest pusta. Brak elementów do obliczenia sumy kwadratów.\n");
                } else {
                    printf("Suma kwadratów elementów w tablicy wynosi: %d\n", suma);
                }
                break;
            }
            default:
                printf("Błędny wybór! Wybierz dostepne opcje.\n");
                break;
        }
    }

    return 0;
}
