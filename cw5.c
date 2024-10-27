#include <stdio.h>

int main() {
    char znak;
    int kod;

    printf("Podaj znak ASCII lub kod ASCII: ");
    scanf(" %c", &znak);

    if ((znak >= && znak <= 'Z') || (znak >= 'a' && znak <= 'z')) {
        printf("Znak '%c' jest literą alfabetu.\n", znak);
    } else {
        kod = (int)znak;
        printf("Znak '%c' nie jest literą alfabetu. Kod ASCII: %d\n", znak, kod);
    }

    return 0;
}