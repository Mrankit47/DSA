#include<iostream>
using namespace std;

int main()
{
    int large = INT32_MIN;
    int num[] = {5,15,22,1,-15,-24};

    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++)
    {
        if(num[i]>num[large])
        {
            large=i;
        }
    }
    cout<<large;
    return 0;
}