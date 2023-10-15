#include<iostream>
using namespace std;
int main()
{
    int a,k,t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        k=0;
        while(a--)
        {
            k++;
            while(k%3==0 || k%10==3)
            {
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
