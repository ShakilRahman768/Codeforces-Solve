#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,c=0,d=0,i;
    string s;
    cin>>a;
    cin>>s;
    for(i=0;i<a;i++){
        if(s[i]=='1'){
            c++;
        }
        else if(s[i]=='0'){
            d++;
        }
    }
    if(c>=d){
        cout<<c-d<<endl;
    }
    else{
        cout<<d-c<<endl;
    }
    return 0;
}
