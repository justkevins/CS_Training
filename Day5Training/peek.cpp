//for the given 1D array, find the first postive peek element
//peak : element should be greater than its adjacent elements
//using linear search T(n) = O(n) 
#include<iostream>
using namespace std;


int main()
{
    int arr[10],i,n;
    cout<<"\n***FIRST PEEK ELEMENT***\n";
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\nThe element is: ";
    for(i = 0; i < n; i++)
    {
        if((i == 0 || arr[i - 1] < arr[i]) && (i == n-1 || arr[i +1] < arr[i])) //here the first and the last element are checked seperatly
        {
            cout<<arr[i]<<" at index "<<i<<"\n";
            break;
        }
    }
    if(i == n)
    {
        cout<<"PEEK ELEMENT NOT FOUND!!!";
    }
}