#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            c=(a/b)+1;
            d=(c*b)-a;
            cout<<d<<endl;
        }

    }
    return 0;
}
