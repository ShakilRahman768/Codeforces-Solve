#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d=0;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b==-1)
        {
            if(d==0)
            {
                c++;
            }
            else
            {
                d=d-1;
            }
        }
        else
        {
            d=d+b;
        }
    }
    cout<<c<<endl;
    return 0;
}
