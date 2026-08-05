#include<iostream>
using namespace std;

int main()
{
    int number,factorial=1,i=1;

    cout<<"enter any number : ";
    cin>>number;

    while (i<=number)
    {
        factorial*=i;
        i++;
    }
    cout<<"factorial of given number is : "<<factorial;
    

    return 0;
}