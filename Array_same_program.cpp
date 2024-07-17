#include <iostream>
#include<array>

using namespace std;

int main(){

array<int,7> a = {1,1,3,3,4,4,4};
array<int,7> visited;
int size = a.size();
for(int i=0;i<size;i++){
    if(visited[a[i]] != 0){
        int counts=1;
        visited[a[i]] = 1;
        for(int j=i+1; j<size; j++){
            if(a[j] == a[i]){
                counts++;
            }
        }
        cout<<a[i]<<" : "<<counts<<endl;
    }
}
}


