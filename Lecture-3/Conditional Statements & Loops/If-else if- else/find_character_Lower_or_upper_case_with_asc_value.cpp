#include<iostream>
using namespace std;

int main ()
{
    char character;
    
    cout<<"enter any characeter : ";
    cin>>character;

    if(character >= 97  && character<=123 )
    {
        cout<<"character is lowercase";
    }
    else if(character>=65 && character<=90 )
    {
        cout<<"character is Uppercase";
    }
    else
    {
        cout<<"This is not a Valid Character";
    }

    return 0;


}