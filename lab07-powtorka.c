#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

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

int suma_cyfr(char tablica[]) {
    if (n == 0) {
        return -1;
    }
    
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(tablica[i])) {
            suma += tablica[i] - '0';
        }
    }
    return suma;
}

void wyswietl_drzewo(char tablica[]) {
    if (n == 0) {
        printf("Tablica jest pusta.\n");
        return;
    }

    int poziom = 1;
    int elementy_w_poziomie = 1;
    int indeks = 0;

    while (indeks < n) {
        for (int i = 0; i < elementy_w_poziomie && indeks < n; i++) {
            printf("%c ", tablica[indeks++]);
        }
        printf("\n");
        
        elementy_w_poziomie *= 2;
        poziom++;
    }
}

int main() {
    char tablica[MAX_SIZE];
    int wybor;

    while (1) {
        printf("\nWybierz operację:\n");
        printf("0. Zakończ\n");
        printf("1. Wypisz elementy tablicy\n");
        printf("2. Dodaj nowy element\n");
        printf("3. Usuń element\n");
        printf("4. Suma cyfr\n");
        printf("5. Wypisz tablicę jako drzewo binarne\n");
        printf("Wybór: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 0:
                printf("Zakończenie programu.\n");
                return 0;
            case 1:
                wyswietl_tablice(tablica);
                break;
            case 2:
                dodaj_element(tablica);
                break;
            case 3:
                usun_element(tablica);
                break;
            case 4:
                {
                    int suma = suma_cyfr(tablica);
                    if (suma == -1) {
                        printf("Tablica jest pusta, suma wynosi 0.\n");
                    } else {
                        printf("Suma cyfr: %d\n", suma);
                    }
                }
                break;
            case 5:
                wyswietl_drzewo(tablica);
                break;
            default:
                printf("Błędny wybór! Spróbuj ponownie.\n");
                break;
        }
    }

    return 0;
}