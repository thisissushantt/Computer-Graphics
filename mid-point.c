#include <stdio.h>
int main()
{
    int r, h, k, x, y;
    int pk;
    int p, q;

    printf("enter radius:");
    scanf("%d", &r);
    printf("\nenter centre point\n");
    scanf("%d%d", &h, &k);

    x = 0, y = r, pk = 1 - r;
    p = h, q = k;

    for (int i = 1; i <= 8; i++)
    {
        printf("(%d,%d)\t", p, q);
        printf("%d\n", pk);
        x++;
        if (pk < 0)
        {
            pk = pk + 2 * x + 1;
        }
        else
        {
            y--;
            pk = pk + 2 * x + 1 - 2 * y;
        }
        p = x + h, q = y + k;
    }
}