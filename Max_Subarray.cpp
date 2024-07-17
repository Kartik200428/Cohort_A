#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {2,4,-1,2,-5,2};
    int maximumSum = INT_MIN;
    int currentSum = 0;
    for(int i=0;i<arr.size();i++){
        currentSum += arr[i];
        if(currentSum > maximumSum){
            maximumSum = currentSum;
        }
        else if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout<<"Maximum sum is: "<<currentSum<<endl;
    return 0;

}
