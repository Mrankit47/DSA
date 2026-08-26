#include<iostream>
using namespace std;

int main()
{
    int num[] = {1,3,5,6,7};
    for(int i=0; i< sizeof(num)/4; i++)
    {
        cout<<num[i];
        cout<<" ";
    }
        return 0;
}