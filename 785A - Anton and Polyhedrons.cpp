#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b=0;
    string s;
    cin>>a;
    while(a--)
    {
        cin>>s;
        if(s[0]=='T')
        {
            b=b+4;
        }
        else if(s[0]=='C')
        {
            b=b+6;
        }
        else if(s[0]=='O')
        {
            b=b+8;
        }
        else if(s[0]=='D')
        {
            b=b+12;
        }
        else if(s[0]=='I')
        {
            b=b+20;
        }
    }
    cout<<b<<endl;
    return 0;
}
