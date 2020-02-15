#include<iostream>
using namespace std;
#define MAX_INT 1000
struct Card
{
    char mark;
    char num;
};

bool isStable(Card*in,Card*res,int N)
{
    for(int i=0; i< N; ++i)
    {
        if(in[i].mark!=res[i].mark)
        {
            return false;
        }
    }
    return true;
}

bool bubbleSort(Card*A,int N,Card* B)
{
    bool flg =true;
    while(flg)
    {
        flg =false;
        for(int j=N-1;j>0;--j)
        {
            if(B[j].num < B[j-1].num)
            {
                Card tmp;
                tmp = B[j-1];
                B[j-1] = B[j];
                B[j]=tmp;
                flg =true;
            }
        }
    }
    for(int k=0;k<N;k++)
    {
        if(k<N-1) cout << B[k].mark << B[k].num << " ";
        if(k==N-1) cout<< B[k].mark<<B[k].num<<endl;
    }
    
    return true;
}

bool selectionSort(Card*A,int N,Card*B)
{
    for(int i=0;i<N;++i)
    {
        int minj =i;
        for(int j=i;j<N;++j)
        {
            if(A[j].num<A[minj].num)
            {
                minj = j;
            }
        }
        if(minj !=i)
        {
            Card tmp;
            tmp = A[i];
            A[i] =A[minj];
            A[minj]=tmp;
        }
    }
    for(int k=0;k<N;k++)
    {
        if(k<N-1) cout << A[k].mark<<A[k].num << " ";
        if(k==N-1) cout<< A[k].mark<<A[k].num<<endl;
    }
    return isStable(A,B,N);
}


int main()
{
    int N;cin >>N;
    Card A[N],B[N],C[N];
    for(int i=0;i<N;++i)
    {
        cin>>A[i].mark>>A[i].num;
        B[i]=A[i];
        C[i]=A[i];
    }
    if(bubbleSort(A,N,B))
    {
        cout << "Stable" <<endl;
    }
    else
    {
        cout << "Not stable"<<endl;
    }
    
    if(selectionSort(C,N,B))
    {
        cout << "Stable" <<endl;
    }
    else
    {
        cout << "Not stable"<<endl;
    }
    
    
}