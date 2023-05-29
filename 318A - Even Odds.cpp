#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b;
    if(a%2==0){
        c=a/2;
        if(c>=b){
            cout<<(b*2)-1<<endl;
        }
        else{
            b=b-c;
            cout<<b*2<<endl;
        }
    }
    else{
        c=(a/2)+1;
        if(c>=b){
            cout<<(b*2)-1<<endl;
        }
        else{
            b=b-c;
            cout<<b*2<<endl;
        }
    }
    return 0;
}
