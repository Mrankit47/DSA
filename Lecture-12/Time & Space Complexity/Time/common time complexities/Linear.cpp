// Linear time complexity O(n)

#include<iostream>
using namespace std;

int main()
{
    int fact = 1,n=5;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<"factorial is : "<<fact;
    return 0;

}