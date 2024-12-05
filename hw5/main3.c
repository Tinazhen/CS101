#include <stdio.h>
int main(){
    for(int i=1,j=1;i<=9;j++){
        int ans=i*j;
        printf("%d*%d =%d\t",i,j,ans);
        if(j==9){
            printf("\n");
            j=0;
            i++;
        }
    }
    return 0;
}