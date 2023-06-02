#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,j=0,k=0;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && j==0){
            i=i+2;
            j=1;
        }
        else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && j==1){
            i=i+2;
            if(k==0){
                cout<<" ";
                k=1;
            }
        }
        else{
            cout<<s[i];
            j=1;
            k=0;
        }
    }
    cout<<endl;
    return 0;
}
