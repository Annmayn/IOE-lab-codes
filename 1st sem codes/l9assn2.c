#include <stdio.h>
#include <math.h>
main()
{
    struct point
    {
        int x;
        int y;
    } p1, p2;
    float distance;
    printf ("Enter the coordinates of the first point:");
    scanf ("%d %d", &p1.x, &p1.y);
    printf ("Enter the coordinates fo the second point:");
    scanf ("%d %d", &p2.x, &p2.y);
    distance = sqrt (pow(p2.x - p1.x, 2)+pow(p2.y - p1.y, 2));
    printf ("The distance between these two points is: %f.", distance);
}
