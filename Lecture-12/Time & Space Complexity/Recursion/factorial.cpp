#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1; 
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"ent any number you want to factorial : ";
    cin>>n;
    cout<<"factorial of "<<n <<" is : "<<factorial(n);
    return 0;
}