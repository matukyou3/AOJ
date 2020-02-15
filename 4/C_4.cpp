#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    set<string> S;
    int n; cin >>n;

    string cmd;
    string str;

    for(int i=0;i<n;i++)
    {
        cin >> cmd >> str;
        if(cmd=="insert")
        {
            S.insert(str);
        }
        else if(cmd=="find")
        {
            if(S.find(str)==S.end()) cout << "no"<<endl;
            else cout<< "yes" <<endl;
        }
    }
}