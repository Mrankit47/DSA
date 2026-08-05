#include<iostream>
using namespace std;

int main()
{
    int number,factorial=1;
    cout<<"enter any number : ";
    cin>>number;

    for(int i=1; i<=number; i++)
    {
          factorial*=i;
    }
    cout<<"fcatorial of you number is : "<<factorial;
    return 0;
}