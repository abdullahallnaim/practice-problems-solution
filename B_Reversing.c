#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
//     1 2 0 4 0 5 6
// 1st 2 1 0 4 0 5 6
// 2nd 4 0 1 2 0 5 6

    for (int i = 0; i < n; i++) 
    { // first robot je 0 khujbe
        if (arr[i] == 0)
        {
            int j = 0, k = i - 1;
            // i index e 0 ache
            // j hocche shuru theke reverse korar jonne
            // k hocche 0 er ag obdi reverse korar jonne
            // swaping er code likhbo
            while(j<k){
                int tmp = arr[j];
                arr[j] = arr[k];
                arr[k] = tmp;
                j++;
                k--;
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
