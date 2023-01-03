#include<iostream>
using namespace std;
int main()
{
    int a[3],n,m,i,j=0;
    cin>>n;
    while(n--){
        m=0;
        for(i=0;i<3;i++){
            cin>>a[i];
            m=m+a[i];
        }
        if(m>=2){
            j++;
        }
    }
    cout<<j<<endl;
    return 0;
}
