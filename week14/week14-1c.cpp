#include <stdio.h>

int main() {
    int a, b, c;
    int maxNum, midNum, minNum;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        maxNum = a;
        if (b >= c) {
            midNum = b;
            minNum = c;
        } else {
            midNum = c;
            minNum = b;
        }
    }
    else if (b >= a && b >= c) {
        maxNum = b;
        if (a >= c) {
            midNum = a;
            minNum = c;
        } else {
            midNum = c;
            minNum = a;
        }
    }
    else {
        maxNum = c;
        if (a >= b) {
            midNum = a;
            minNum = b;
        } else {
            midNum = b;
            minNum = a;
        }
    }

    printf("%d", maxNum*100+midNum*10+minNum+1);

    return 0;
}
