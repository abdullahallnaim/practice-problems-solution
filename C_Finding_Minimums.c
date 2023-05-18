#include <stdio.h>
#include <limits.h>
int main()
{
    // total kaj
    // 1. ekta robot --> shuru theke sesh obdi jabe, min ber korbe
    // 2. second robot --> kothay kothay group complete hoiche
    // 3. jodi osoman vag hoy so ektu kaj korbo
    int a, k;
    scanf("%d %d", &a, &k);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = k - 1;    // second : first group hobe k-1 index e
    int mn = INT_MAX; // min check korar jonne
    for (int i = 0; i < a; i++)
    { // first robot
        if (arr[i] < mn) // 7 obdi min check korteche
        {
            mn = arr[i]; // first robot samne jacche ar min ke capture korteche
        }
        if (i == j)
        {   // group complete checking j = 2 5 8
            // i = 0 1 2 3 4 5 6 7
            // j =     2     5     8
            printf("%d ", mn);
            j += k;
            mn = INT_MAX; // every time compare korbo bole
        }
    }

    if(a % k != 0){ // jodi osoman vag hoy taile ta run korbe
        printf("%d ", mn);
    }

    return 0;
}
