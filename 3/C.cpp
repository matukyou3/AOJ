#include<iostream>
#include<string>
#include<list>
#include<algorithm>
#include<cstdio>

using namespace std;


int main()
{
    list<int> D;
    string S;
    int n; cin >> n;
    int a;
    for(int i=0; i< n; i++)
    {
        cin >> S;
        if(S=="insert")
        {
            cin >> a;
            D.push_front(a);
        }
        if(S=="delete")
        {
            cin >> a;
            for(list<int>::iterator it = D.begin();it !=D.end();++it)
            {
                if(*it == a)
                {
                    D.erase(it);
                    break;
                }
            }
        }
        if(S=="deleteFirst")
        {
            D.pop_front();
        }
        if(S=="deleteLast")
        {
            D.pop_back();
        }
    }
    cout << D.front();
    D.pop_front();
    while(!D.empty())
    {
        if(D.begin()!=D.end())cout <<" "<< D.front();
    //    else cout << D.front()<<endl;
        D.pop_front();
    }
    cout << endl;
    return 0;
}