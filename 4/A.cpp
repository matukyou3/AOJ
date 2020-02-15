#include<iostream>

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
        for(int j=0;j<n;++j)
        {
            if(B[i]==A[j])
            {
                C++;
                break;
            }
        }
    }
    cout << C << endl;
    return 0;
}