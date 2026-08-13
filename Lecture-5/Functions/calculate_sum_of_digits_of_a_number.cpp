#include<iostream>
using  namespace std;

int sum (int number)
{   
    int digit,sum=0;
    while(number>0)
    {
        digit = number%10;
        number/=10;
        sum+=digit;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"enter any number : ";
    cin>>num;

    cout<<"sum of digits is : "<<sum(num);
    return 0;
}