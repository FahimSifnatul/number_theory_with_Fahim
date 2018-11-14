#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int D[505];

int derangement(int n)
{
    if(n == 0)return 1;
    if(n == 1)return 0;
    if(D[n] != -1)return D[n];
    return D[n] = (n-1)*(derangement(n-1)) + (n-1)*(derangement(n-2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(D,-1,sizeof D);
    D[0] = 1;
    D[1] = 0;
    for(int i=2;i<=500;i++)
        derangement(i);
    cout<<D[500];
    return 0;
}
