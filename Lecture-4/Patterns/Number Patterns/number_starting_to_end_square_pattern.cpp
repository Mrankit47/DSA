#include<iostream>
using namespace std;

int main()
{
    int number,num=1;
    cout<<"enter any number : ";
    cin>>number;
    

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}