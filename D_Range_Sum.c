#include<stdio.h>

int main()
{
    // total kaj
    // 1. l>r hoy value swap korbo
    // 2. 1 theke r obdi value gular jogfol nibo
    // 3. 1 theke l-1 obdi jogfol nibo

    // 2. 2 theke 3 biyog dibo
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        long long int l, r; // safe zone e thakar jonne
        scanf("%lld %lld", &l, &r);
        if(l > r){
            long long int tmp = r;
            r = l;
            l = tmp;
        }
        long long int res = (r * (r + 1)) / 2 - ((l - 1) * (l - 1 + 1)) / 2;
        printf("%lld\n", res);
    }
        return 0;
}
