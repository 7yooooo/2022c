#include <stdio.h>

int main() {
    int num;
    int i;


    scanf("%d", &num);

    for (i = 1; i * i <= num; i++) {
        if (i * i == num) {
            printf("%d",i);
            return 0;
        }
    }

    printf("0");
    return 0;
}
