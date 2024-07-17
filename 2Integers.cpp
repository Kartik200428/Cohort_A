#include <iostream>
#include <cmath>
using namespace std;
int main() {
cout<<"Enter the numbers:"<<endl;
int S, P;
cin >> S >> P;
int discriminant=S*S-4*P;
if(discriminant<0){
cout<<"No solution!"<<endl;
return 1;
}
int sqrtDiscriminant = sqrt(discriminant);
int x1 = (S + sqrtDiscriminant) / 2;
int x2 = (S - sqrtDiscriminant) / 2;
if(x1 < x2){
cout << x1 << " " << x2 << endl;
}else{
cout << x2 << " " << x1 << endl;
}
return 0;
}
