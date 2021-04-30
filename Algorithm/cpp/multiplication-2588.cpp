#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int firstNumber;
    int secondNumber;
    int secondNumberTmp;
    int digits = 1;
    int remainder;
    int total = 0;

   

    cin>>firstNumber>>secondNumber;
    secondNumberTmp = secondNumber; 
     
    while(true){
        remainder = secondNumberTmp % 10;
        secondNumberTmp /= 10;
        
        cout<<firstNumber*remainder<<endl;
        total += (firstNumber*remainder) * digits;

        if(secondNumberTmp <= 0){
            break;
        }
        digits *= 10;
    }
    
        


    cout<<total<<endl;


}