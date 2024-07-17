#include <iostream>
using namespace std;
int main()
{
    int ar[50], num, x, y, temp;

    cout<<"Please Enter the Number of Elements you want in the array:";
    cin>>num;

    cout<<"Please Enter the Value of Elements:";

    for(x = 0; x < num; x++)
    {
        cin>>ar[x];
    }

     for(x = 0; x < num - 1; x++){

        for(y = 0; y < num - x - 1; y++){

            if(ar[y] > ar[y + 1]){

                temp = ar[y];

                ar[y] = ar[y + 1];

                ar[y + 1] = temp;

            }

        }

    }

    cout<<"Array after implementing bubble sort:";

    for(x = 0; x < num; x++){

        cin>>ar[x];

    }

    return 0;

}



