#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='.'){
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i=i+1;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i=i+1;
        }
    }
    cout<<endl;
    return 0;
}
