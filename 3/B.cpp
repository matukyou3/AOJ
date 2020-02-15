#include<iostream>
#include<queue>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    queue<pair<string, int> > Q;
    int t=0;
    int n,q;
    cin >> n >> q;

    for(int i=0;i<n;++i)
    {
        string name;
        int time;
        cin >> name >> time;
        pair<string,int> p = make_pair(name,time);
        Q.push(p);
    }

    pair<string,int> u;
    while(!Q.empty())
    {
        u = Q.front();Q.pop();
        int a = u.second;
        int m = min(a,q);
        a = a - m;
        t = t + m;
        if(a > 0)
        {
            Q.push(make_pair(u.first,a));
        }
        else
        {
            cout << u.first << " " << t << endl;
        }
    }
    return 0;
}