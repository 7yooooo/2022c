#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;
    int width, height, area;


    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    width = abs(x2 - x1);
    height = abs(y2 - y1);

    area = width * height;

    printf("%d", area);

    return 0;
}
