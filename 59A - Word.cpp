#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a=0,b=0,i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]<96){
            a++;
        }
        else if(s[i]>96){
            b++;
        }
    }
    if(a<=b){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s<<endl;
    return 0;
}
