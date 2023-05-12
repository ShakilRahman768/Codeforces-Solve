#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=s.length();
        if(a>10){
            cout<<s[0]<<a-2<<s[a-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }

    return 0;
}
