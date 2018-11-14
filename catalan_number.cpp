#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll c[1005];

int catalan(int n)
{
    if(n == 0)
    {
        c[0] = 1;
        return 1;
    }
    if(c[n] != 0)return c[n];
    return c[n] = catalan(n-1)*2*(2*n-1)/(n+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<1001;i++)
        catalan(i);
    cout<<c[1000]<<endl;
    return 0;
}


// basic formula: Cn = (2n)C(n) - (2n)C(n+1);
// Cn = 1/(n+1)*(2nCn);
// Recurrence formula: Cn = (2*(2*n-1)/(n+1))*Cn-1
// application of catalan number----
// https://en.wikipedia.org/wiki/Catalan_number









