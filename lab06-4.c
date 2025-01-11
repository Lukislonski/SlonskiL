#include <stdio.h>
#include <string.h>

int are_characters_identical(char a, char b) {
    return (a == b) ? 1 : 0;
}

char get_character_at(const char* s, int i) {
    if (i >= 0 && i < strlen(s)) {
        return s[i];
    } else {
        return '\0';
    }
}

int is_palindrome(const char* s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        if (!are_characters_identical(get_character_at(s, i), get_character_at(s, length - i - 1))) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[100];

    printf("Podaj slowo: ");
    scanf("%99s", word);

    if (is_palindrome(word)) {
        printf("Podane slowo \"%s\" jest palindromem.\n", word);
    } else {
        printf("Podane slowo \"%s\" nie jest palindromem.\n", word);
    }

    return 0;
}
