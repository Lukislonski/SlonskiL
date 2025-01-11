#include <stdio.h>

int porownajZnaki(char znak1, char znak2) {
    if (znak1 == znak2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char znakA = 'a';
    char znakB = 'b';

    if (porownajZnaki(znakA, znakB)) {
        printf("Znaki są identyczne.\n");
    } else {
        printf("Znaki są różne.\n");
    }

    return 0;
}