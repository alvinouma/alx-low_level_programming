#include <stdio.h>

void positive_or_negative(int num) {
    if (num > 0)
        printf("%d is positive\n", num);
    else if (num < 0)
        printf("%d is negative\n", num);
    else
        printf("Number is zero\n");
}

int main(void) {
    int i;

    i = 98;
    positive_or_negative(i);

    return 0;
}
