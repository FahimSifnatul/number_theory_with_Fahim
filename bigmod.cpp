#include<bits/stdc++.h>
using namespace std;

int bigmod(int base,int pow,int mod)
{
    if(pow == 0) return 1%mod;
    int x = bigmod(base,pow>>1,mod);
    x = (x*x) % mod;
    if(pow & 1)
        x = (base*x) % mod;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int base,pow,mod;
    cin>>base>>pow>>mod;
    cout<<bigmod(base,pow,mod);
    return 0;
}

// suppose, you fall in a situation when you have found a negative number returned from
// bigmod function. at that time you have to do------
// at first add m to x until x>0. then do----
// x %= m;




