#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll SNF[55][55];

ll snf(ll n,ll r)
{
    if(n == r)
    {
        SNF[n][r] = 1;
        return 1;
    }
    else if(r == 1)
    {
        ll  temp = 1,N = n-1;
        while(N != 0)temp *= N,--N;
        SNF[n][r] = temp;
        return temp;
    }
    if(SNF[n][r] != 0)return SNF[n][r];
    return SNF[n][r] = snf(n-1,r-1) + snf(n-1,r)*(r-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(ll i=1;i<51;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            if(j == 0)
               SNF[i][j] = 0;
            else snf(i,j);
        }
    }
    cout<<SNF[50][1];
    return 0;
}




