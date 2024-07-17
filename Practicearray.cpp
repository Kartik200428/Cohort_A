 da#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a = {3,4,2,7};
    int size = a.size();
    cout<<"Size of array is: "<<size<<endl;

    cout<<"Elements in array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }


    int front = a.front();
    cout<<"First element of array: "<<front<<endl;

    int back = a.back();
    cout<<"Last element of array: "<<back<<endl;

    int empty = a.empty();
    cout<<"After using empty function: "<<empty<<endl;

    bool ar = 0;
    cout<<ar;

}
