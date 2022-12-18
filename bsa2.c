#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int x0, y0, x1, y1;
    int dx, dy, pk;
    int i;
    printf("enter intital points\n");
    scanf("%d%d", &x0, &y0);
    printf("\nenter final points\n");
    scanf("%d%d", &x1, &y1);
    dy = abs(y1 - y0), dx = abs(x1 - x0);
    pk = 2 * dy - dx;
    printf("\n%d,%d,%d\n", dx, dy, pk);
    for (i = 1; i <= dx; i++)
    {
        while (pk > 0)
        {
            y0 = y0 - 1;
            pk = pk - 2 * dx;
        }
        x0 = x0 + 1;
        pk = pk + 2 * dy;
        printf("pk = %d\t", pk);
        printf("\n(%d,%d)\n", x0, y0);
    }
}