#include <stdio.h>

int main(){
    int maxCount = 0;
    scanf("%d",&maxCount);
    
    if(maxCount > 1000000){
        return 0;
    }

    int *firstNumber = new int[maxCount];
    int *secondNumber = new int[maxCount];
    for(int i=0; i<maxCount; i++){
        scanf("%d %d",&firstNumber[i],&secondNumber[i]);
    }

    for(int i=0; i<maxCount; i++){
        printf("%d\n",firstNumber[i]+secondNumber[i]);
    }
}