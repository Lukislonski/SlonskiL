#include <stdio.h>
    int main(){
        int n;

        printf("Podaj liczbe n: ");
        scanf("%d", &n);

        int tablica[n];

        printf("Podaj %d liczb: \n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &tablica[i]);
        }
        printf("Wczytane liczby to: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", tablica[i]);
            }
            printf("\n");

            return 0;
        }
