#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = a - 1; i <= j; i++, j--)
    {
        if (i == j)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d %d ", arr[i], arr[j]);
        }
    }

    return 0;
}
