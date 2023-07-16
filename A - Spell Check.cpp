#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int a,n,i,t;
    string s[5],m[5]={"T","i","m","r","u"},p;
    cin>>t;
    while(t--){
        cin>>n;
        a=0;
        cin>>p;
        if(n!=5){
            cout<<"NO\n";
        }
        else{
            for(i=0;i<n;i++){
                s[i]=p[i];
            }
            sort(s, s + n);
            for(i=0;i<n;i++){
            if(s[i]==m[i]){
                a++;
            }
        }
        if(a==5){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        }
    }
    return 0;
}
