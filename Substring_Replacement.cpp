#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    string str1,str2;
    cout<<"Enter the string you want to remove:"<<endl;
    cin>>str1;
    cout<<"Enter the string you want to insert:"<<endl;
    cin>>str2;

    size_t start_pos = str.find(str1);
    if(start_pos != string::npos){
        str.replace(start_pos, str1.length(), str2);
        }
        cout<<"String after replacement:"<<str<<endl;
return 0;
}
