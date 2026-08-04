#include<iostream>
using namespace std;

int main()
{
    int number,sum=0,i=1;
    cout<<"enter any number : ";
    cin>>number;

    while(i<=number)
    {
        sum +=i;
        i++;
    }
    cout<<sum;
    return 0;

}