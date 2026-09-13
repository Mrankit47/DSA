// WAF to print intersection of 2 arrays.
#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int sizearr1,int sizearr2)
{
    int arr[sizearr1+sizearr2],count=0 ;
    
    for(int  i=0; i<sizearr1; i++)
    {
        for(int j=0; j<sizearr2; j++)
        {
            if(arr2[j]==arr1[i])
            {
                arr[count]=arr2[j];
                count++;
            }
        }
    
    }
    for(int i=0; i<count; i++)
    {
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int arr1[] = {5,3,6,2,1,9};
    int arr2[] = {3,66,8,2,66,88};
    int sizearr1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizearr2 = sizeof(arr2)/sizeof(arr2[0]);

    intersection(arr1,arr2,sizearr1,sizearr2);

    return 0;
}