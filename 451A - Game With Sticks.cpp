#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>=m){
        if(m%2==0){
            cout<<"Malvika\n";
        }
        else{
            cout<<"Akshat\n";
        }
    }
    else if(n<m){
        if(n%2==0){
            cout<<"Malvika\n";
        }
        else{
            cout<<"Akshat\n";
        }
    }
    return 0;
}
