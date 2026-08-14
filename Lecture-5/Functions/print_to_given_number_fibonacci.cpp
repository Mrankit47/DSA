#include<iostream>
using namespace std;

int fibonacci(int number)
{   
    int fib=1;
    for(int i=0; i<=number; i++)
    {
        fib+=i;
        cout<<fib<<" ";
    }
}

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    fibonacci(number);
    return 0;
}