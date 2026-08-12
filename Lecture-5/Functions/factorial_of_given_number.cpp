#include<iostream>
using namespace std;

int factorial(int number)
{
    int fact=1;
    for(int i=1; i<=number; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int number;
    cout<<"enater any number : ";
    cin>>number;

    cout<<"factorial of given number is : "<<factorial(number);
    return 0;
}