#include <stdio.h>

int main(){
    int count,max;

    scanf("%d %d",&count,&max);
    int *number = new int[count];
    for(int i=0; i<count; i++){
       scanf("%d",&number[i]);
    }

    for(int i=0; i<count; i++){
        if(max>number[i]){
            if(count-1 == i){
                printf("%d",number[i]);
            }else{
                printf("%d ",number[i]);
            }
        }
    }
}