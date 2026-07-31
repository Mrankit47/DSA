#include<iostream>
using namespace std;

int main()
{
    int Total, Maths_marks, Chemestry_marks, Physics_marks,Percentage;
    
    cout<<"Enter your marks one by one\n";

    cout<<"Enter Maths marks : ";
    cin>>Maths_marks;

    cout<<"Enter Chemestry marks : ";
    cin>>Chemestry_marks;

    cout<<"Enter Physics marks : ";
    cin>>Physics_marks;

    Total = Maths_marks+Physics_marks+Chemestry_marks;

 
    Percentage = Total/3;
    

    if(Percentage>=90 && Percentage<=100)
    {
        cout<<"your grade is A++";
    }
    else if(Percentage>=80)
    {
        cout<<"Your grade is A";
    }
    else if(Percentage>=60)
    {
        cout<<"Your grade is B";
    }
    else if(Percentage>=33)
    {
        cout<<"Your grade is C";
    }
    else
    {
        cout<<"Fall";
    }

    return 0 ;
}