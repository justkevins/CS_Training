#include<iostream>
#include<string>
#include<stack>
using namespace std;

int checkbalance(string exp)
{
    stack<char> s;

    for(char ch : exp)
    {
        if(ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}')
        {
            if (s.empty() || (ch == ')' && s.top() != '(') ||
                (ch == ']' && s.top() != '[') || (ch == '}' && s.top() != '{'))
            {
                return 0;
            }
            s.pop();
        }
    }
    return 1;
}

int main()
{
    string exp;
    cout<<"Enter expression: ";
    getline(cin,exp);

    if(checkbalance(exp) == 1)
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"not balanced";
    }
}