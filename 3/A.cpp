#include<iostream>
#include<stack>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
    stack<int> D;
    string S;

    while(cin>>S)
    {
        if(S=="+" || S=="-" || S=="*")
        {
            int a = D.top();
            D.pop();
            int b = D.top();
            D.pop();

            if(S=="+")
            {
                D.push(a+b);
            }
            if(S=="-")
            {
                D.push(b-a);
            }
            if(S=="*")
            {
                D.push(a*b);
            }
        }else
        {
            D.push(atoi(S.c_str()));
        }
    }
    cout << D.top()<<endl;
    return 0;
}