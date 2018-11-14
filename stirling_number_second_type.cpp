#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll SNS[105][105];

ll sns(ll n,ll r)
{
    if(n == r or r == 1)
    {
        SNS[n][r] = 1;
        return 1;
    }
    if(SNS[n][r] != 0)return SNS[n][r];
    return SNS[n][r] = sns(n-1,r-1) + sns(n-1,r)*r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    SNS[0][0] = 1;
    for(ll i=1;i<101;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            if(j == 0)
               SNS[i][j] = 0;
            else sns(i,j);
        }
    }
    cout<<SNS[100][5];
    return 0;
}



