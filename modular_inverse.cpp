#include<bits/stdc++.h>
using namespace std;

int mod_inverse(int base,int pow,int mod)
{
   if(pow == 0)return 1;
   int x = mod_inverse(base,pow/2,mod);
   x = (x%mod)*(x%mod);
   if(pow%2 != 0) x = (base%mod)*(x%mod);
   return x;
}

int main()
{
   ios_base::sync_with_stdio(false);
   int a,b,m;
   cin>>a>>b>>m;
   int modular_inverse = mod_inverse(b,m-2,m);
   cout<<((a%m)*(modular_inverse%m))%m<<endl;
   return 0;
}

//we have to find (a/b)%m. division mod is different from addition,substraction and multiplication mod.
// for that we have to find b^-1. b^-1 = b^(m-2)%m.
// b and m must be co-primes and m must be prime.
// if m is not prime then the formula is b^(phi(m)-1)%m.
// we will apply the knowledge of bigmod to find b^(m-2) or b^(phi(m)-1)%m.
// (a/b)%m is same as (a%m)*(b^-1%m); and b^-1 can be calculated as above







