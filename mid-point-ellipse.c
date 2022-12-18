#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, x, y, h, k;
    int p1, p2;
    printf("enter value of a and b \n");
    scanf("%d%d", &a, &b);
    printf("enter centre values\n");
    scanf("%d%d", &h, &k);

    x = 0, y = b;

    // for region 1

    p1 = (b * b) + (a * a) / 4 - (a * a) * (b * b);

    p2 = (b * b) * (x + 0.5) * (x + 0.5) + (a * a) * (y - 1) * (y - 1) - (a * a) * (b * b);

    while (2 * b * b * x < 2 * a * a * y)
    {
        x++;
        if (p1 < 0)
        {
            p1 = p1 + 2 * b * b * x + b * b;
        }
        else
        {
            p1 = p1 + 2 * b * b * x + b * b - 2 * a * a * y;
            y--;
        }
        printf("\n(%d,%d)", x + h, y + k);
    }

    // for region 2

    while (y > 0)
    {
        y--;
        if (p2 > 0)
        {
            p2 = p2 - 2 * a * a * y + a * a;
        }
        else
        {
              x++;
            p2 = p2 - 2 * a * a * y + a * a + 2 * b * b * x;
          
        }
    }
    printf("\n(%d,%d)", x + h, y + k);
}