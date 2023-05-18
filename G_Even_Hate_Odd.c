#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        int e = 0, o = 0, mx;
        for (int j = 0; j < b; j++)
        {
            int y;
            scanf("%d", &y);
            if (y % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (e > o)
        {
            mx = e;
        }
        else
        {
            mx = o;
        }
        if (b % 2 != 0)
        {
            printf("-1\n");
        }
        else if (e == o)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", mx - (b / 2));
        }
    }
    return 0;
}
