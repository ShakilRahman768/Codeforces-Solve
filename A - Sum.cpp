#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a>=b && a>=c){
            if((b+c)==a){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(b>=a && b>=c){
            if((a+c)==b){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(c>=a && c>=b){
            if((a+b)==c){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
