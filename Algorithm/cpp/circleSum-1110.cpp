#include <stdio.h>

int main(){
    int n,tmp,count = 1;

    scanf("%d",&n);
    tmp = n;

    if(n < 0 && n > 99){
        return 0;
    }

    while(1){
 
        tmp = ((tmp%10)*10)+(((tmp/10)+(tmp%10))%10);
        // printf("%d\n",tmp);
        if(tmp == n){
            break;
        }
        count++;
    }

    printf("%d",count);
}