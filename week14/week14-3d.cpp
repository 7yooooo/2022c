#include <stdio.h>

int main() {
    long long wealth;
    scanf("%lld", &wealth);
    if (wealth < 0) {
        wealth = -wealth;
        printf("-");
    }

    long long divisor = 1;
    while (divisor <= wealth / 1000) {
        divisor *= 1000;
    }

    while (divisor > 1) {
        printf("%lld,", wealth / divisor);
        wealth %= divisor;
        divisor /= 1000;
    }

    printf("%lld", wealth);

    return 0;
}
