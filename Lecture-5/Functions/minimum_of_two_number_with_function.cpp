#include<iostream>
using namespace std;

int minimum(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int number1, number2;
    cout<<"enater first number : ";
    cin>>number1;
    cout<<"ener second number : ";
    cin>>number2;

    cout<<"minumum number is : "<<minimum(number1,number2);
    return 0;
}