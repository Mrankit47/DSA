#include<iostream>
using namespace std;

int main()
{
    int large = INT8_MIN;
    int num[] = {5,15,22,1,-15,-24};

    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++)
    {
        large = max(large,num[i]);
    }
    cout<<large;
    return 0;
}