#include <stdio.h>

void printDigits(int n) {
    int power = 1;
    while (n > 0) {
        int digit = (n % 10) * power;
        printf("%d ", digit);
        n /= 10;
        power *= 10;
    }
}

int main() {
    int number;
    scanf("%d", &number);

    printDigits(number);

    return 0;
}
