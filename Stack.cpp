#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Goku");
    s.push("Vegeta");
    s.push("Gohan");
    s.push("Broly");
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Element after pop: "<<s.top();

}
