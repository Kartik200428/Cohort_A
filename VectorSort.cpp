#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> a ={3,4,7,1,8,5};
    int size = a.size();

    sort(a.begin() , a.end());

    cout<<"Sorted:"<<endl;
    for(auto x :a){
        cout<<x<<" "<<endl;
    }
    return 0;
}
