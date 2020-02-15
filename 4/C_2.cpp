#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#define MAX_NUM 16777216
using namespace std;

int main()
{
    int n; cin >> n;
    string cmd;
    string s;
    vector<bool> T(MAX_NUM,false);
    for(int i=0; i< n; ++i)
    {
        cin >> cmd >> s;
        long long key;
        long long pow=1;
        for(int j=0;j<s.size();++j)
        {
            if(s[i]=='A') key += 0*pow;
            if(s[i]=='C') key += 1*pow;
            if(s[i]=='G') key += 2*pow;
            else key+=3*pow;
            pow = pow * 4;
        }
        if(cmd == "insert")
        {
            T[key]=true;
        }
        else
        {
            if(T[key]) cout << "yes"<<endl;
            else cout<<"no"<<endl;
        }
        
    }
    return 0;
}