#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0,i;
    cin>>a>>b>>c;
    for(i=1;i<=c;i++){
        d=d+(a*i);
    }
    if(d>b){
        cout<<d-b<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
