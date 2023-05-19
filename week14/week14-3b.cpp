#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int oddNumbers[99];
    int count = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 1) {
            oddNumbers[count] = num;
            count++;
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", oddNumbers[i]);
    }
    return 0;
}
