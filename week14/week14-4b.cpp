#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    int sum = 0;
    int N = 0;

    while (sum <= K) {
        N++;
        sum += N;
    }

    printf("%d", N);

    return 0;
}
