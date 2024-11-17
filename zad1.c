#include <stdio.h>

    int suma_kwadratow(int n) {
        int suma = 0;
        for (int i =1; i <= n; i++){
            suma += i * i;
        }
        return suma;
    }

    int main() {
        int n;

        printf("podaj liczbę naturalną n: ");
        if (scanf("%d", &n) != 1 || n < 1){
            printf("Podana wartość nie jest liczbą naturalną większą lub równą 1.\n");
            return 1;
        }

        int wynik = suma_kwadratow(n);
        printf("Suma kwadratów licz od 1 do %d wynosi: %d\n", n, wynik);

        return 0;
    }
