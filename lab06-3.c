#include <stdio.h>
#include <string.h>

char get_char_at_index(const char *s, int i) {
    if (i < 0 || i >= strlen(s)) {
        printf("Niepoprawny indeks!\n");
        return '\0';
    }
    return s[i];
}

int main() {
    char napis[] = "Przyklad";
    int indeks = 3;

    char wynik = get_char_at_index(napis, indeks);

    if (wynik != '\0') {
        printf("Znak na pozycji %d to: %c\n", indeks, wynik);
    }

    return 0;
}