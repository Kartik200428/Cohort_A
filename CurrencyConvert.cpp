#include<iostream>
using namespace std;

void r_to_p(float rupee_amount){
    //rupees to pound
    int rupees_to_pound = rupee_amount*0.0094;
    cout<<"Total Amount in Pound : "<<rupees_to_pound;
}

void p_to_r(float rupee_amount){
    float pound;
    cout<<"\nEnter amount in pound: ";
    cin>>pound;
    float rupees = 106.90;
    double pound_to_rupees = pound*rupees;
    cout<<"pound in rupees:"<<pound_to_rupees<<endl;

}

void r_to_d(){
    int rupee_amount;
    cout<<"Enter amount in rupee:"<<endl;
    cin>>rupee_amount;
    int rupees_to_dollar = rupee_amount*0.012;
    cout<<"Total amount in Dollar : "<<rupees_to_dollar<<endl;;
}

void d_to_r(float rupee_amount){
    float dollar;
    cout<<"Enter amount in dollar:"<<endl;
    cin>>dollar;
    double dollar_to_rupees = dollar*83.5;
    cout<<"Dollar in Rupees:"<<dollar_to_rupees<<endl;
}

void r_to_y(){
    int rupee_amount;
    cout<<"Enter the amount in rupee:"<<endl;
    cin>>rupee_amount;
    int rupees_to_yuan = rupee_amount*0.087;
    cout<<"Total amount in yuan:"<<rupees_to_yuan<<endl;
}

void y_to_r(float rupee_amount){
    float yuan;
    cout<<"Enter amount in yuan:"<<endl;
    cin>>yuan;
    double yuan_to_rupees = yuan*11.48;
    cout<<"Yuan to Rupees:"<<yuan_to_rupees<<endl;
}

int main()
{
  float rupee_amount;
  cout<<"Enter the amount in Rupees :"<<endl;
  cin>>rupee_amount;
  r_to_p(rupee_amount);
  p_to_r(rupee_amount);
  r_to_d();
  d_to_r(rupee_amount);
  r_to_y();
  y_to_r(rupee_amount);
  return 0;

}
