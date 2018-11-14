#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll fibo[85],n;

ll fibonacci(ll n)
{
    if(n == 0)return 0;
    else if(n == 1)
    {
        fibo[n] = 1;
        return 1;
    }
    if(fibo[n] != 0)return fibo[n];
    return fibo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(ll i=0;i<81;i++)
        cout<<i<<' '<<fibonacci(i)<<endl;
    //cout<<fibo[n];
    return 0;
}




