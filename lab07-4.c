#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Podaj numer wyrazu ciągu Fibonacciego: ");
    scanf("%d", &n);

    printf("n-ty wyraz ciągu Fibonacciego to: %d\n", fibonacci(n));

    return 0;
}