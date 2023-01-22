    #include <iostream>
    using namespace std;
    int main() {
        int a,b,i;
        cin>>a>>b;
        for(i=0;i<b;i++){
            if(a%10!=0){
                a=a-1;
            }
            else{
                a=a/10;
            }
        }
        cout<<a<<endl;
     
        return 0;
    }
