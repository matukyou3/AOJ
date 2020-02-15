#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define MAX_NUM 16777216

int main()
{
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    string cmd;
    string s;
    vector<bool> v(MAX_NUM,false);
    for(int i=0; i< n; ++i)
    {
        cin >> cmd >> s;
        long long key =0;
        long long pow=1;
        for(int j=0;j<s.size();++j)
        {
            if(s[j]=='A') key += 0*pow;
            if(s[j]=='C') key += 1*pow;
            if(s[j]=='G') key += 2*pow;
            else key+=3*pow;
            pow = pow * 4;
        }
        cout << key << endl;
        if(cmd == "insert")
        {
            v[key]=true;
        }
        else if(cmd == "find")
        {
            if(!v[key]) cout << "no"<<endl;
            else cout << "yes"<<endl;
        
        }
        
    }
    return 0;
}
