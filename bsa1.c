#include <stdio.h>
#include <math.h>
int pl(int dy, int pk)
{
    return (pk + 2 * dy);
}
int pm(int dy, int dx, int pk)
{
    return (pk + 2 * dy - 2 * dx);
}

int main()
{
    int x0, y0, x1, y1, xend;
    int xi, yi, pk;
    int dx, dy;
    printf("enter intital point\n");
    scanf("%d%d", &x0, &y0);
    printf("\nenter final points\n");
    scanf("%d%d", &x1, &y1);
    dy = y1 - y0, dx = x1 - x0;
    pk = 2 * dy - dx;

    if (x1 > x0)
    {
        xi = x0;
        xend = x1;
    }
    else
    {
        xi = x1;
        xend = x0;
    }
    yi = y0;

    pk = 2 * dy - dx;

    while (xi <= xend)
    {
        printf("(%d,%d)", xi, yi);
        xi++;
        if (pk < 0)
        {
            pk = pl(dy, pk);
        }
        else
        {
            yi++;
            pk = pm(dy, dx, pk);
        }
    }
}