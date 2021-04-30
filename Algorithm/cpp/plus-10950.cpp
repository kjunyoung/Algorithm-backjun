#include <iostream>

using namespace std;

int main(){
    int count;

    cin >> count;

    int *a = new int[count];
    int *b = new int[count];
    int *total = new int[count];

    for(int i = 0; i<count; i++){
        cin >> a[i] >> b[i];
    
        total[i] = a[i] + b[i];
    }

    for(int i = 0; i<count; i++){
        cout << total[i] << endl;
    }
}