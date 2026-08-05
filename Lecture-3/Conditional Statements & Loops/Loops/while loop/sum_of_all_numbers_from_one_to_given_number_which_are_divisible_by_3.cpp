#include<iostream>
using namespace std;

int main()
{
    int number,sum=0,i=1;
    cout<<"enter any number : ";
    cin>>number;

    while (number>=i)
    {
        if(i%3==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"sum = "<<sum;
    return 0 ;
    
}