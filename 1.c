#include <stdio.h>

    int globalVar = 42;

    void printAddresses(int a, int b) {
        printf("Adres pierwszej liczby: %p\n", (void*)&a);
        printf("Adres drugiej liczby: %p\n", (void*)&b);
}

    int main() {
        int localVar = globalVar;

    printf("Adres zmiennej globalnej: %p\n", (void*)&globalVar);
    printf("Adres zmiennej lokalnej: %p\n", (void*)&localVar);

    printAddresses(globalVar, localVar);

    return 0;
}
