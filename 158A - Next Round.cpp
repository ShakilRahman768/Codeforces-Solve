#include<iostream>
using namespace std;
int main()
{
    int a,n,b,c,i=0;
    cin>>a>>n;
    n=a-n;
    while(a--){
        cin>>b;
        if(a>=n&& b>0){
            i++;
            c=b;
        }
        else if(b==c && b>0){
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}
