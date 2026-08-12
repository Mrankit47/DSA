#include<iostream>
using namespace std;

int sum(int number)
{   
    int total=0;
    for(int i=1; i<=number; i++)
    {
        total+=i;
    }
    return total;
}
int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    cout<<"sum is = "<<sum(number);
    return 0 ;
}