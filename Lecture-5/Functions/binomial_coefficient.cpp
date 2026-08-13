#include<iostream>
using namespace std;

int factorial(int number)
{   
    int fact = 1;
    for(int i=1; i<=number; i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int N , int R )
{
    int nr = factorial(N-R);
    N = factorial(N);
    R = factorial(R);
    int nCr = N/(R*nr);
    return nCr;
}
int main()
{
    int N,R,nCr;
    cout<<"enter N valour : ";
    cin>>N;
    cout<<"enter R value : ";
    cin>>R;
    cout<<"ncr = "<<ncr(N,R);
    return 0 ;
}