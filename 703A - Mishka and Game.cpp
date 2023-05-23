#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c=0,d=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            c++;
        }
        else if(a<b){
            d++;
        }
    }
    if(c>d){
        cout<<"Mishka"<<endl;
    }
    else if(c<d){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
