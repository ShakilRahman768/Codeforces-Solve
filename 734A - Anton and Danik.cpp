#include<iostream>
using namespace std;
int main()
{
    int c=0,d=0,n,i;
    char a[100000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
            if(a[i]=='A'){
                c++;
            }
            else if(a[i]=='D'){
                d++;
            }
    }
    if(c>d){
        cout<<"Anton"<<endl;
    }
    else if(d>c){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
