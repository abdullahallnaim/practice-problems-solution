#include<stdio.h>

int main()
{
    // total 4 ta case
    // 1. primary diagonal e ---> \
    // 2  Secondary Diagonal e ---> /
    // 3. middle value te ki thakbe --> X
    // 4. baki sob khane ki thakbe ---> *
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a;j++){
            if (i == (a + 1) / 2 && j == (a + 1) / 2)
            { // middle value shudhu ekbar print hobe
                printf("X");
            }
            else if(i == j){ // primary diagonal
                printf("\\");
            }
            else if(i+j == a+1){
                printf("/");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
        return 0;
}
