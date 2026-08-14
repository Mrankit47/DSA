#include<iostream>
using namespace std;

int prime(int number)
{
    int prime = 1;
    for(int i=2; i<number; i++)
    {
        if(number%i==0)
        {
          prime = 0 ;
          break;
        }   
    }
    if(prime==0)
    {
        cout<<"number is not prime";
    }
    else
    {
        cout<<"number is prime";
    }
}
int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    prime(number);
    return 0;
}
