#include <stdio.h>

int przekrojOdcinkow(int a1, int b1, int a2, int b2, int *a3, int *b3) {
    *a3 = a1 > a2 ? a1 : a2;
    *b3 = b1 < b2 ? b1 : b2;

    if (*a3 <= *b3) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int a1, b1, a2, b2;
    int a3, b3;

    printf("Podaj odcinek [a1, b1]: ");
    scanf("%d %d", &a1, &b1);
    printf("Podaj odcinek [a2, b2]: ");
    scanf("%d %d", &a2, &b2);

    if (przekrojOdcinkow(a1, b1, a2, b2, &a3, &b3) == 1) {
        printf("Przekrój odcinków to [%d, %d]\n", a3, b3);
    } else {
        printf("Przekrój odcinków jest pusty\n");
    }

    return 0;
}