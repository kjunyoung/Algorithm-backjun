#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int x;
    int y;

    cin >> x >> y;

    if(x > 0){
    // 1사분면 또는 4사분면
        if(y > 0){
           cout << "1";     
        }else{
           cout << "4"; 
        }
    }else{
        // 2사분면 또는 3사분면
        if(y > 0){
            cout << "2";
        }else{
            cout << "3";
        }
    }

}