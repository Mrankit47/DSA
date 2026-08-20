#include<iostream>
using namespace std;

int BinaryToDecimal (int binary)
{
    int ans=0, pow=1,rem;
    while(binary>0)
    {
        rem = binary%10;
        ans+=rem*pow;
        binary=binary/10;
        pow=pow*2;
    }
    return ans;
}

int main()
{
    int binary;
    cout<<"enter binary number : ";
    cin>>binary;
    
    cout<<"Binary to decimal is : "<<BinaryToDecimal(binary);
    return 0; 
}