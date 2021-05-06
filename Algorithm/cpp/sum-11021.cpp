#include <stdio.h>

int main(){
    int count = 0;
    int y;
    scanf("%d",&count);

    int *firstNumber = new int[count];
    int *secondNumber = new int[count];

    for(int i=0; i<count; i++){
        scanf("%d %d", &firstNumber[i],&secondNumber[i]);
    }

    for(int i=0; i<count; i++){
        y = i+1; 
        if(firstNumber[i] > 0 && secondNumber[i] < 10){
        
            printf("Case #%d: %d\n",y,firstNumber[i]+secondNumber[i]);
            
        }
    }
}