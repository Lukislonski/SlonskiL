#include <stdio.h>

    int main() {
        int rozmiar;

    printf("Podaj liczbe elementow w tablicy: ");
    scanf("%d", &rozmiar);

    int tablica[rozmiar];
    int tablicaKwadratow[rozmiar];

    printf("Podaj %d liczb:\n", rozmiar);
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tablica[i]);
    }

    for (int i = 0; i < rozmiar; i++) {
        tablicaKwadratow[i] = tablica[i] * tablica[i];
    }

    printf("Tablica kwadratow:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tablicaKwadratow[i]);
    }
    printf("\n");

    return 0;
}
