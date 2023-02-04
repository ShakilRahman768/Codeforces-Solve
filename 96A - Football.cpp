#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b=1,k=0,i;
    string s;
    cin>>s;
    a = s.length();
    for(i=0;i<a;i++){
        if(s[i]==s[i+1]){
            b++;
            if(b>=7){
                cout<<"YES\n";
                k=1;
                break;
            }
        }
        else{
            b=1;
        }
    }
    if(k==0){
        cout<<"NO\n";
    }
    return 0;
}
