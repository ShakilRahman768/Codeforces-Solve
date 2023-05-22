#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c=0,d=0;
    cin>>a;
    while(a--){
        cin>>b;
        c=c+b;
        d++;
    }
    cout<<setprecision(12)<<c/d<<"\n";
    return 0;
}
