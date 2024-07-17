#include<iostream>
using namespace std;
int main()
{
    int total_classes,class_attended;
    float percentage;
    cout<<"Enter total number of classes: "<<endl;
    cin>>total_classes;
    cout<<"Enter number of classes attended: "<<endl;
    cin>>class_attended;

    percentage = (float)class_attended*100/total_classes;
    cout<<"Total percentage of classes attended: "<<percentage<<"%"<<endl;
    if(percentage >= 75){
        cout<<"You are allowed to sit in the exams"<<endl;
    }
    else{
        cout<<"You are not allowed to sit in the exams"<<endl;
    }
    return 0;
}
