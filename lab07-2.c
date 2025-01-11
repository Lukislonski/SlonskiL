#include <stdio.h>

int nwd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return nwd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d", &a, &b);

    printf("NWD(%d, %d) = %d\n", a, b, nwd(a, b));

    return 0;
}