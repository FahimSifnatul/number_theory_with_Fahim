#include<bits/stdc++.h>
using namespace std;
#define sieve_limit 1000000
vector<int>prime;
bool check[sieve_limit+5];
int n;

int sieve()
{
 int len = sqrt(sieve_limit)+1;
 for(int i=4;i<=sieve_limit;i+=2)check[i] = true;
 for(int i=3;i<=len;i+=2)
 {
     if(check[i] == false)
     {
         for(int j=i*i;j<=sieve_limit;j+=2*i)
            check[j] = true;
     }
 }
 prime.push_back(2);
 for(int i=3;i<=sieve_limit;i+=2)
 {
    if(check[i] == false)
        prime.push_back(i);
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 sieve();
 int n;
 cin>>n;
 if(n%2 != 0 or n<4)cout<<"not possible\n";
 else
 {
     for(int i=2;i<=n-2;)
     {
         if(check[i] == false and check[n-i] == false)
         {
             cout<<i<<' '<<n-i<<endl;
             return 0;
         }
         i == 2 ? ++i : i += 2;
     }
 }
 return 0;
}

//this conjecture says that any even number greater than 2
// can be written as sum of two prime numbers.
// but it is also tested that some odd numbers greater than 3 and no more than
// 1e9 can be written as sum to two prime numbers.













