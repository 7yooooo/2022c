#include <stdio.h>

int main() {
    int totalSeconds;
    scanf("%d", &totalSeconds);
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
