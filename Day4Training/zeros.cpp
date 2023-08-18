//to move the zeros to end of the array
#include<iostream>
using namespace std;

int main()
{
    int n,i,index,j=0,count=0;
    cout<<"Array size: ";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"\nNew array is: "<<"\n[";
    for(i = 0; i < n; i++)
    {
        arr2[i] = 0;
        if(arr1[i] == 0)
        {    
            arr2[j++] = arr1[i];
            count++;
        }
        else
        {
            cout<<arr1[i]<<" ";
        }
    }
   
    for(i = 0; i < count; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<"]";
}