#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int stock = 70, i, avail = 0,machine=200,num;
    char ch;
    do
    {
        cout << "How many pepsi bottles you want: ";
        cin >> num;
        if (num > 200)
        {
            cout<<"MAXIMUM Capacity 200!!\n";
        }
        else if (num > stock)
        {
            avail = num - stock;
            cout << avail<<" Available, Rest out of stock!!!\n";
            for (i = 0; i < num; i++)
            {
                cout << "Take it :)\n";
                stock--;
                exit(0);
            }
            cout << "Have a good drink!!";
        }
        else{
            for (i = 0; i < num; i++)
            {
                cout << "Take it :)\n";
                stock--;  
            }
            cout<<stock<<"- Available\n";
            cout << "Have a good drink!!\n";
        }
        cout<<"DO YOU WANT TO CONTINUE!!! (y or n): ";
        cin>>ch;
    }while(ch == 'y');
    
}


