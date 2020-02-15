#include<iostream>
#include<queue>
#include<algorithm>

#define MAX_NUM 1000000000
using namespace std;

int check(long long P,int k,queue<int>Q)
{
    queue<int> R(Q);
    for(int j=1;j<=k;++j)
    {
        if(R.empty()) break;
        long long t =P;
        while(t>0)
        {
            if(R.empty()) break;
            int a= R.front();
            t=t-a;
            if(t < 0) break;
            else 
            {
               // cout << t << " " << a<<endl;
                R.pop();
            }
        }
    }
    return (Q.size()-R.size());
}

int main()
{
    int n,k; cin >> n>> k;
    queue<int> Q;
    for(int i=0;i<n;++i)
    {
        int t;
        cin >> t;
        Q.push(t);
    }

    long long left=0;
    long long right=MAX_NUM;
    while(left+1<right)
    {
        long long mid = (left + right)/2;
        if(check(mid,k,Q) < n) left = mid;
        else right = mid;
    }

    cout << right << endl;
}