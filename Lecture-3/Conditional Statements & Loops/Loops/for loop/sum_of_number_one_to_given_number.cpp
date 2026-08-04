#include<iostream>
using namespace std;

int main()
{
    int number,total=0;
    cout<<"enter any number : ";
    cin>>number;

    for ( int i = 1; i <= number; i++)
    {
        total = total+i;
    }
    cout<<total;
    
    return 0;
}