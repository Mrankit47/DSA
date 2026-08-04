#include<iostream>
using namespace std;

int main()
{
    int number,count=1;
    cout<<"enter any number : ";
    cin>>number;

    while (count<=number)
    {
        cout<< count <<endl;
        count++;
    }
    
    return 0;
}