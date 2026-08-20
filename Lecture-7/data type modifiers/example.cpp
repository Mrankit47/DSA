#include<iostream>
using namespace std;

int main()
{
    //long  | short  | long long  | signed  | unsigned

    cout<<sizeof(int)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(short  int)<<endl;
    cout<<sizeof(unsigned  int)<<endl;
    
    unsigned int a;
    cout<<"enter any number : ";
    cin>>a;

    cout<<a;


    return 0;
}