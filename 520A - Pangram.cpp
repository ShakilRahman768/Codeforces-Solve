#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int a,b=0,i;
    cin>>a;
    cin>>s;
    if(a<26)
    {
        cout<<"NO\n";
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(), s.end());
        for(i=0; i<a-1; i++)
        {
            if(s[i]==s[i+1])
            {
                b++;
            }
        }
        if((a-b)>=26)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
