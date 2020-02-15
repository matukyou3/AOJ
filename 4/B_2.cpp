#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int S[n];
    for(int i=0;i<n;++i) cin >> S[i];
    int q; cin >> q;
    int T[q];
    for(int j=0;j<q;++j) cin >> T[j];
    int C=0;
    for(int k=0;k < q; ++k)
    {
        if(binary_search(S,S+n,T[k])) C++;
    }
    cout << C << endl;
    return 0;
}