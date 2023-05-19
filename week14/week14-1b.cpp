#include <stdio.h>

int main() {
    int num1, num2;
    int count = 0;
    int i, j;


    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        int isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && i != 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
