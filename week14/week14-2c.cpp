#include <stdio.h>

int main() {
    const double intervalLength = 1.2;
    const int numCars = 10;

    int fastestCarIndex = -1;
    int fastestSpeed = 0;

    for (int i = 0; i < numCars; i++) {
        int seconds;

        scanf("%d", &seconds);

        int speed = 60*60*intervalLength / seconds;

        if (speed > fastestSpeed) {
            fastestCarIndex = i;
            fastestSpeed = speed;
        }
    }

    printf("%d %d\n", fastestCarIndex + 1, fastestSpeed);

    return 0;
}
