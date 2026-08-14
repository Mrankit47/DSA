#include<iostream>
using namespace std;

void printprimenumber(int number)
{
    
    for(int i=2; i<number; i++)
    {   int prime=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            { 
                prime = 1;
                break;
            }
        }
        if(prime ==0)
        {
            cout<<i<<" ";
        }
    }
    
}
int main()
{
    int number;
    cout<<"enter any numnber : ";
    cin>>number;

    printprimenumber(number);
    return 0 ;


}