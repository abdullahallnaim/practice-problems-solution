#include <stdio.h>

int main()
{
    int a;
    scanf("%d\n", &a);
    int cnt[26] = {0};
    for (int i = 0; i < a; i++)
    {
        char c;
        scanf("%c", &c);
        cnt[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] != 0)
        {
            printf("%c", i + 97);
            cnt[i]--;
        }
    }
    return 0;
}
