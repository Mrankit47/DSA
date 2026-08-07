#include<iostream>
using namespace std;

int main()
{
    int number,num=1; 
    cout<<"enter no of row : ";
    cin>>number;

    for(int i = 1; i<=number; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}