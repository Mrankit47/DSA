//figure out how to find if a number is power of 2 without any loop.
#include<iostream>
using namespace std;

int numberpow(int num)
{
    int pow=1 ;
    for(int i=2; i<=num; i=i*2)
    {
        if(i==num)
        {
            cout<<"number "<<num <<" is " <<pow << " pow of 2";
        }
        pow+=1;
        
    }
}
int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    numberpow(number);
    return 0;
}