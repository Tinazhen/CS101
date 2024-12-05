#include <stdio.h>
//只有兩個for loop
int main() {
    int n = 7; // 行數
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n ; j++) {
            if(j<=n-i){
                printf(" ");
            }else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}