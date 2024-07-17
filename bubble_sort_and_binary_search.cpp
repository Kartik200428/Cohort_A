#include<iostream>
using namespace std;

void bubblesort(int arr[])
{
    for(int i = 0; i <sizeof(arr) - 1; i++)
    {
        for(int j = 0; j <sizeof(arr) - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"Array after implementing bubble sort:"<<endl;
    for(int i = 0; i < sizeof(arr); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {44,5,69,12,89,45};

    int choice;
    cout<<"Which function you want to perform:"<<endl;
    cout<<"1. Sorting"<<endl;
    cout<<"2. Searching"<<endl;
    cin>>choice;

    switch(choice)
    {

    case 1:
        cout<<"Perfroming Bubblesort"<<endl;
        bubblesort(arr);
        break;

    case 2:
        int x;
        int n = sizeof(arr) / sizeof(arr[0]);
        cout<<"\nWhich element you want to find:"<<endl;
        cin>>x;
        int result = binarySearch(arr, 0, n - 1, x);
        (result == -1) ? printf("Element is not present in array")
        : printf("Element is present at index %d",result);
        break;
    }

    return 0;

}
