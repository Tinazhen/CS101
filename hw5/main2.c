#include <stdio.h>
int main(){
    double PI=0.0f;
    int i=1;
    while((int)(PI*100000)!=314159){
        if(i%2==1){
            PI+=4.0/(2*i-1);
        }else{
            PI-=4.0/(2*i-1);
        }
        i++;
    }
    printf("%d ",i);
    return 0;
}