#include<bits/stdc++.h>
using namespace std;

int POW(int base,int power)
{
 int x = 1;
 for(int i=0;i<power;i++)
 {
     x *= base;
 }
 return x;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int a,m;
 cin>>a>>m;//enter two co-prime numbers and m must be prime.
 cout<<POW(a,m-1)%m;//answer will be 1 always
 return 0;
}

//this algorithm states that if a and m are two co-prime numbers
// and if m is prime then (a^m-1)%m=1;
//there is another theorem using euler's totient function.
//Euler's Theorem. if a and m are co-primes then (a^phi(m))%m=1 always














