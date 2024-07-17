#include<iostream>
using namespace std;
void add(int a, int b){
int sum = a+b;
cout<<"Sum of a and b is: "<<sum<<endl;
}
void sub(int a, int b){
int mini= a-b;
cout<<"Subtraction of a and b is: "<<mini<<endl;
}
void divison(int a, int b){
int divi= a/b;
cout<<"Divison of a and b is: "<<divi<<endl;
}
void multi(int a, int b){
int mult = a*b;
cout<<"Multiplication of a and b is: "<<mult<<endl;
}
void rem(int a, int b){
int reme= a%b;
cout<<"Remainder of a and b is: "<<rem<<endl;
}

int main(){
int a,b;
cout<<"Enter the value of 2 numbers: "<<endl;
cin>>a>>b;

add(a,b);
sub(a,b);
divison(a,b);
multi(a,b);
rem(a,b);
}
