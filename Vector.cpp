#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(12);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(14);
    cout<<"Capacity ="<<v.capacity()<<endl;
    cout<<"Size ="<<v.size()<<endl;

    cout<<"First element ="<<v.front()<<endl;
    cout<<"Last element ="<<v.back()<<endl;


cout<<"Before pop"<<endl;
for(int i:v)
{
    cout<<i<<" ";
    cout<<endl;
}

v.pop_back();
cout<<"After pop ="<<endl;
for(int i:v)
{
    cout<<i<<" ";
}

cout<<"Before clear size="<<v.size()<<endl;
v.clear();
cout<<"After clear size="<<v.size()<<endl;

//Another way to create the vector
//vector<int> v (5,1);
//means size is 5 and all five default value is 1
//cout<<"print all element"<<endl;
//for(int i:v){
//cout<<i<<" ";
//};
}
