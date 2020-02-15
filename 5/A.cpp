#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int n; cin >> n;
    int A[n]; for(int i=0;i<n;++i) cin >> A[i];
    int q; cin >> q;
    int m[q]; for(int j=0;j<q;++j) cin >> m[j];
    bool dp[30][3000];
    memset(dp,false,sizeof(dp));
    dp[0][0]=true;

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<=2000;++j)
        {
            dp[i+1][j] |= dp[i][j];
            if(j >= A[i]) dp[i+1][j] |= dp[i][j-A[i]];
        }
    }
    for(int k=0;k<q;++k)
    {
        if(dp[n][m[k]]) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
    return 0;
}
