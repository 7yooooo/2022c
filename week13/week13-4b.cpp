#include <stdio.h>

int main() {
    int numbers[10];
    int i;


    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }


    for (i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }



    return 0;
}
