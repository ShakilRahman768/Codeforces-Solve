#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000000],b,c,n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n);
    if(n<3){
        cout<<0;
    }
    else if(a[n-1]-a[1]>a[n-2]-a[0]){
        cout<<a[n-2]-a[0]<<endl;
    }
    else{
        cout<<a[n-1]-a[1]<<endl;
    }
    return 0;
}
