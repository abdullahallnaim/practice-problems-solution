#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    // total case gula
    // a ---> songkhok odd number
    // b ---> songkhok even number

    // 1. a == 0 && b == 0 ---> NO
    // 2. a == b ---> YES
    // 3. abs(a - b) == 1 --> yes
    // 4. else ---> no
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0){
        printf("NO");
    }
    else if(a == b){
        printf("YES");
    }
    else if(abs(a -b) == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
