#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0,e;
    cin>>a;
    cin>>b;
    a=a-1;
    c=b;
    e=b;
    while(a--)
    {
        cin>>b;
        if(c>b)
        {
            c=b;
            d++;
        }
        else if(e<b)
        {
            e=b;
            d++;
        }
    }
    cout<<d<<endl;
    return 0;
}
