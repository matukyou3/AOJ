#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int A[10010];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> A[i];
    }
    int q;
    int B[1000];
    cin>>q;
    for(int j=0;j<q;++j)
    {
        cin >> B[j];
    }

    int C=0;

    for(int i=0;i<q;++i)
    {
        int left =0;
        int right = n;
        while(left + 1<right)
        {
            int mid = (left + right) / 2;
            if(B[i]>=A[mid])  left = mid;
            else if(B[i] < A[mid]) right = mid;
        }
        if(A[left]==B[i])
            {
                C++;
            }
    }
    cout << C << endl;
    return 0;
}