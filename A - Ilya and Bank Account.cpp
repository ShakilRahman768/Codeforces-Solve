#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    if(a>=0){
        cout<<a<<endl;
    }
    else{
        a=a*(-1);
        b=a%10;
        c=a/10;
        d=c%10;
        if(b>=d){
            a=a/10;
        }
        else{
            a=(c-d)+b;
        }
        cout<<a*(-1)<<endl;
    }
    return 0;
}

