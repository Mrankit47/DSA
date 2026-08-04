#include<iostream>
using namespace std;

int main()
{
    int number,sum=0,i;
    cout<<"enter any number : ";
    cin>>number;

    for(i=1; i<=number; i++)
    {
        sum +=i;
        if(i==10)
        {
            break;
        }
    }
    cout<<sum;
    return 0 ;
}