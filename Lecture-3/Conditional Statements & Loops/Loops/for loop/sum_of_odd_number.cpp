#include<iostream>
using namespace std;

int main()
{
    int number,sum=0;
    
    cout<<"enter any number : ";
    cin>>number;

    for(int i = 1; i<=number; i++)
    {
        if(i%2 !=0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"sum of odd number is : " <<sum;
    return 0;
}