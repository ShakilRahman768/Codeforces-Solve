#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    if(a<=5){
        cout<<"1"<<endl;
    }
    else{
        b = a/5;
        if(a%5==0){
            cout<<b<<endl;
        }
        else{
            cout<<b+1<<endl;
        }
    }
    return 0;
}
