#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int total = a+b;
    return total;
}
int main()
{
    int number1,number2;
    cout<<"enter first number : ";
    cin>>number1;
    cout<<"enter second number : ";
    cin>>number2;
    cout<<"sum = " <<sum(number1,number2);
    return 0;
}