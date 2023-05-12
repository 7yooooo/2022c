#include <stdio.h>

int main() {
    int N, M;
    int cups;


    scanf("%d", &N);


    scanf("%d", &M);

    cups = N / M;

    if (N % M != 0) {
        cups++;
    }

    printf("%d", cups);

    return 0;
}
