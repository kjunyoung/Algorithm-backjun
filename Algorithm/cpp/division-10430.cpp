#include <iostream>

using namespace std;
int main(){
   int a,b,c;
 cin>>a>>b>>c;

   // while(1) {
   //    cin>>a>>b>>c;
   //    if(a>2 && b<10000 && b!=0 && c<10000 && c!=0)
   //       break;
   //    else
   //       continue;
   // }

    cout<<(a+b)%c<<'\n';
    cout<<((a%c) + (b%c))%c<<'\n';
    cout<<(a*b)%c<<'\n';
    cout<<((a%c)*(b%c))%c<<endl;
}