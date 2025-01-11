#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;
    
    printf("Podaj liczbe dziesietna: ");
    scanf("%d", &number);

    printf("Liczba binarna: ");
    decimalToBinary(number);
    
    return 0;
}