#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int miniindex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[miniindex])
            {
                miniindex=j;
            }
        }
        swap(arr[i],arr[miniindex]);
    }
    cout<<"Array after implementing selection sort:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    selectionsort(arr,n);
}
