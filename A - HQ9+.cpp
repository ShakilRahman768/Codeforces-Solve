#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j=0;
    string s;
    cin>>s;
    i=s.length();
    while(i--){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        cout<<"YES\n";
        j=1;
        break;
    }
    }
    if(j!=1){
        cout<<"NO\n";
    }
    return 0;
}
