#include <stdio.h>
int main(){
    int i=12345;
    int others=(i/10000)%10; //萬
    int a=(i/1000)%10; //千
    int b=(i/100)%10; //百
    int c=(i/10)%10; //十
    int d=(i%10); //個
    printf("%d%d%d%d%d",others,d,b,c,a);
}