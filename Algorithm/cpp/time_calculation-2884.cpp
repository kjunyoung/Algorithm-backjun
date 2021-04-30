#include <iostream>

using namespace std;

int main(){
    int H;
    int M;
    int totalM;

    cin >> H >> M;

    totalM = (H*60)+M;

    totalM -= 45;
    if(totalM == 0){
       totalM = (24*60) + totalM - 1; 
    }else if(totalM < 0){
        totalM = (24*60) + totalM;
    }

    cout << totalM/60 << " "<< totalM%60;


}