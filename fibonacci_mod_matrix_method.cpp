#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
using namespace std;

void multiply1(ll co_matrix[2][2])
{
    ll temp[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            temp[i][j] = co_matrix[i][j],co_matrix[i][j]=0;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                co_matrix[i][j] = (co_matrix[i][j]%mod + (temp[i][k]%mod)*(temp[k][j]%mod)%mod)%mod;
            }
        }
    }
}

void multiply2(ll co_matrix[2][2])
{
    ll temp[2][2],base[2][2] = {0,1,1,1};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            temp[i][j] = co_matrix[i][j],co_matrix[i][j]=0;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                co_matrix[i][j] = (co_matrix[i][j]%mod + (temp[i][k]%mod)*(base[k][j]%mod)%mod)%mod;
            }
        }
    }
}


int matrix_expo(ll co_matrix[2][2],ll pow)
{
    if(pow == 1)return 1;
    matrix_expo(co_matrix,pow/2);
    multiply1(co_matrix);
    if(pow%2 != 0)
    {
      multiply2(co_matrix);
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll co_matrix[2][2] = {{0,1},
                         {1,1}};
    ll fibo[2]={0,1};
    if(n > 0)matrix_expo(co_matrix,n);
    fibo[0] = co_matrix[0][0]*0 + co_matrix[0][1]*1;
    fibo[1] = co_matrix[1][0]*1 + co_matrix[1][1]*1;
    cout<<fibo[0];
    return 0;
}

// nth fibonacci -----
// |  Fn  |   |0 1|n |F0|
// |      | = |   | *|  |
// |F(n+1)|   |1 1|  |F1|













