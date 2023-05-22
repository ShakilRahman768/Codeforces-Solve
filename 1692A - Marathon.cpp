#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,t;
    cin>>t;
    while(t--)
    {
        e=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            e++;
        }
        if(a<c)
        {
            e++;
        }
        if(a<d)
        {
            e++;
        }
        cout<<e<<endl;
    }

}
