#include<iostream>
using namespace std;

int main ()
{
    char character;
    
    cout<<"enter any characeter : ";
    cin>>character;

    if(character >= 'a' && character<= 'z')
    {
        cout<<"character is lowercase";
    }
    else if(character>='A' && character<='Z' )
    {
        cout<<"character is Uppercase";
    }
    else
    {
        cout<<"This is not a Valid Character";
    }

    return 0;


}

21 minits