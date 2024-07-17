#include<iostream>
using namespace std;
int main()
{
    int elephant_count;
    int lion_count{}; //Initializes to 0
    int dog_count {10}; //Initializes to 10
    int cat_count {15}; //Initializes to 15

    //Can use expression or initialization
    int domesticated_animals { dog_count + cat_count};

    cout<<"Elephant count:"<<elephant_count<<endl;
    cout<<"Lion_count:"<<lion_count<<endl;
    cout<<"Dog_Count:"<<dog_count<<endl;
    cout<<"Cat_Count:"<<cat_count<<endl;
    cout<<"domesticated animal count:"<<domesticated_animals<<endl;
    return 0;
}
