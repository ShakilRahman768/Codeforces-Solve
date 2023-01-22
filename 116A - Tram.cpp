#include<iostream>
using namespace std;
int main()
{
    int a[1000],b[1000],c=0,i,m=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        m=m-a[i];
        m=m+b[i];
        if(c<m){
            c=m;
        }
    }
    cout<<c<<endl;
    return 0;
}
