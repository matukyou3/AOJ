#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>

#define MAX_NUM 1000000000

using namespace std;
int main()
{
    int n,k; cin >> n>> k;
    int w;
    queue<int> Q;
    for(int i=0;i<n;++i)
    {
        cin >>w;
        Q.push(w);
    }

    for(long long P=1;P<MAX_NUM;++P)
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
        if(R.empty()) 
        {
            cout << P << endl;
            break;
        }
    }
}