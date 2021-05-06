#include <stdio.h>

int main(){
    int count = 0;

    scanf("%d",&count);

    for(int x=0; x<count; x++){
        for(int y=count; y>=0; y--){
            if(x >= y){
                printf("*"); 
            }else{
                printf(" "); 
            }
        }
        printf("\n");
    }
    return 0;
}