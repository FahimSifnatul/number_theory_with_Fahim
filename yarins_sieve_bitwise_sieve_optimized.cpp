#include<bits/stdc++.h>
using namespace std;
#define sieve_limit 1000001
vector<int>prime;
int check[sieve_limit>>5];

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

int sieve()
{
 int len = sqrt(sieve_limit+1);
 for(int i=3;i<=len;i+=2)
 {
     if(Check(check[i>>5],i&31) == 0)
     {
         for(int j=i*i;j<=sieve_limit;j+=(i<<1))
            check[j>>5] = Set(check[j>>5],j&31);
     }
 }
 prime.push_back(2);
 for(int i=3;i<=sieve_limit;i+=2)
 {
    if(Check(check[i>>5],i&31) == 0)
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

















