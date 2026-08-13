#include<iostream>
using namespace std;

int prime(int number)
{
    for(int i=2; i<=number; i++)
    {
        if(number%i!=0 || number )
        {
           cout<<"number is not prime";
        }
        else
        {
            cout<<"number is prime";
        }
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
