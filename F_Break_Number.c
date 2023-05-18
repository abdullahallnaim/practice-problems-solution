#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int result = 0;
    for (int i = 1; i <= size; i++)
    {
        int counter = 0;
        long long num;
        scanf("%lld", &num);
        while (num % 2 == 0)
        {
            counter++;
            num /= 2;
        }
        if (counter > result)
        {
            result = counter;
        }
    }
    printf("%d", result);
}
