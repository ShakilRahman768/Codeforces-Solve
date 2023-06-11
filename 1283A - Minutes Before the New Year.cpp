#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=23-a;
        d=60-b;
        e=(c*60)+d;
        cout<<e<<endl;
    }
    return 0;
}
