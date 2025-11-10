#include <stdio.h>
#include <math.h>

void main() {
    int hours, minutes;
    printf("Enter hours (0-12): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    if (hours < 0 || hours > 12 || minutes < 0 || minutes > 59) {
        printf("Invalid input.\n");
        return;
    }

    if (hours == 12) hours = 0;

    /*
     * The hour hand moves 0.5° per minute.
     * In 1 hour → 30° (360° / 12)
     * In 1 minute → 0.5° (30° / 60)
     * Total minutes passed since 12:00 = (60 * hours + minutes)
     * So, Hour hand angle = 0.5 * (60 * hours + minutes)
     */
    float hourAngle = 0.5 * (60 * hours + minutes);

    /*
     * The minute hand moves 6° per minute.
     * In 60 minutes → 360° (360° / 60 = 6° per minute)
     * So, Minute hand angle = 6 * minutes
     */
    float minuteAngle = 6 * minutes;

    // Find the absolute difference between hour and minute hand
    // Inshort angle = (60 * hours - 11 * minutes) / 2
    float angle = fabs(hourAngle - minuteAngle);

    /*
     * There are two angles between the hands:
     * - The smaller one (angle)
     * - The larger one (360 - angle)
     * We always take the smaller angle.
     */
    if (angle > 180)
        angle = 360 - angle;

    printf("The angle between the clock hands is: %.2f degrees\n", angle);
}
