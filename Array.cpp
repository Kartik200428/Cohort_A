#include<iostream>
using namespace std;
int main(){

int a[5] = {1,3,5,7,9};
cout<<"Completely Initialized Int array A : "<<endl;
for(int x:a) //For each loop very easy and important for Array data structure.
             //Read as for x in array a.
    //For each loop iterates through elements of the array. Introduced in C++ 11.
    cout<<x<<endl;
cout<<endl;

int b[6] = {1,3,5};//Keeping the array incomplete to see what is the outcome result.
cout<<"Partial Initialized Int array B:"<<endl;
for(int y:b)//Shows that for each loop will work accordingly to size of array and not according to number of elements initialized in array

    cout<<y<<endl;
cout<<endl;

float c[6] = {1.2,2.4,3.6,48.54,99.48,54.88};
cout<<"Completely initialized float array C:";
for(float z : c)
    cout<<z<<endl;
cout<<endl;

float d[6] = {12.6,82.4,43.6,4.54,77.48,84.88};
cout<<"CompletelyInitialized float array D with auto:"<<endl;
for(auto z: d)
    cout<<z<<endl;
cout<<endl;

char e[5] = {'A',66,'C',68,'E'};
cout<<"Completely Initialized char Array E with Auto:"<<endl;
for(auto z : e)
    cout<<z<<endl;
cout<<endl;
return 0;

}

