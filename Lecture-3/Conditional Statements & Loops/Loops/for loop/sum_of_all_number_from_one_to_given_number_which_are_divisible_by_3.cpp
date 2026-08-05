#include<iostream>
using namespace std;

int main()
{
    int number, sum=0;
    cout<<"enter any number :";
    cin>>number;

    for(int i=1; i<=number; i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}