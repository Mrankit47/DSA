#include<iostream>
using namespace std;

int main()
{
    int number,prime=1;
    cout<<"enter any number : ";
    cin>>number;

    for(int i=2; i<=number-1; i++)
    {
        if(number%i==0)
        {
            prime = 0;
            break;
        }    
    }
    if(prime == 0)
    {
        cout<<"number is not prime";
    }
    else
    {
        cout<<"number is prime";
    }
    
    return 0;
}