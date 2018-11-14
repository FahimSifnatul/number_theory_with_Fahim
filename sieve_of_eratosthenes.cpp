#include<bits/stdc++.h>
using namespace std;
#define sieve_limit 100000
vector<int>prime;
bool check[sieve_limit+5];
int n;

int sieve()
{
 int len = sqrt(sieve_limit)+1;
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
 cout<<prime.size()<<endl;
 return 0;
}
















