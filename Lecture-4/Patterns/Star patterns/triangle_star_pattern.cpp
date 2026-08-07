#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    for (int i=0; i<number; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}