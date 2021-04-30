#include <iostream>


using namespace std;

int main(){
    int firstNumber,
        secondNumber;

    cin>>firstNumber>>secondNumber;

    if(firstNumber > secondNumber){
        cout<<">"<<endl;
    }

    if(firstNumber < secondNumber){
        cout<<"<"<<endl;
    }

    if(firstNumber == secondNumber){
        cout<<"=="<<endl;
    }
}