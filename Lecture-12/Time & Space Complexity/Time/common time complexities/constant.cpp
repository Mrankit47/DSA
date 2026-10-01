// O (K)= O(1)  time complexity
// Constant 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter any number : ";
    cin>>n;
    // calcluter 1 to n number of sum
    int sum = n*(n+1)/2;
    cout<<"sum is : "<<sum;
    return 0;
}