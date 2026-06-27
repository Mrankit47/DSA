// building claclulator 
#include<iostream>
using namespace std;

int main()
{
    int firstnumber,secondnumer,Result;
    char operation;
    cout<<"Enter first number : ";
    cin>>firstnumber;
    cout<<"Enter second number : ";
    cin>>secondnumer;
    cout<<"Enter (+ , - , * , /) these operations : ";
    cin>>operation;

    if (operation == '+')
    {
        Result = firstnumber+secondnumer;
        cout<<Result<<endl;
    }
    else if(operation == '-')
    {
        Result = firstnumber-secondnumer;
        cout<<Result<<endl;
    }
    else if(operation == '*')
    {
        Result = firstnumber*secondnumer;
        cout<<Result<<endl;
    }
    else if(operation == '/')
    {
        Result = firstnumber/secondnumer;
        cout<<Result<<endl;
    }
    else{
    cout<<"invalid number";
    }

    return 0;
    
}