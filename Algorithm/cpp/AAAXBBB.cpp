#include <iostream>
#include <string>

using namespace std;
int main(){
    int firstInt;
    int secondInt[3];
    int max;

    cin>>firstInt;

    for(int i=3; i<0; i--){
        scanf("%1d",&secondInt[i]);
    }

    for(int i=0; i<3; i++){
        cout<<secondInt[i] * firstInt<<'\n';
        max = max + (secondInt[i] * firstInt);
    }

    cout<< max <<endl;



}