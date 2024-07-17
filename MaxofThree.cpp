#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Maximum is: "<<a;
        }
        else{
            cout<<"Maximum is: "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"Maximum is: "<<b;
        }
        else{
            cout<<"Maximum is: "<<c;
        }
    }

}
