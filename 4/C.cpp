#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string com;
    string s;
    int n; cin >> n;
    vector<string> v;

    for(int i=0;i<n;++i)
    {
        cin >> com >> s;
        if(com == "insert")
        {
            v.push_back(s);
        }
        if(com == "find")
        {
            vector<string>::iterator it = find(v.begin(),v.end(),s);
            if(it == v.end()) cout << "no" << endl;
            else cout << "yes" << endl;
        }

    }
    return 0;
}