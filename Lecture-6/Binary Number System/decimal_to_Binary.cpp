#include<iostream>
using namespace std;

int decimal_to_binary(int number)
{
    int ans =0,rem,Decimal,pow=1;
    while(number>0)
    {
        rem=number%2;
        number/=2;
        ans +=(rem*pow);
        pow = pow*10;
    }
    return ans;
}

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        cout<<"decimal to binary : " <<decimal_to_binary(i)<<endl;
    }
    return 0;
}