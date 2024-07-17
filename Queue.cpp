#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Naruto");
    q.push("Sasuke");
    q.push("Kakashi");

    cout<<"Elements in array are:"<<endl;
    while(!q.empty())
    {
         cout<<q.front()<<endl;
         q.pop();
    }
}
