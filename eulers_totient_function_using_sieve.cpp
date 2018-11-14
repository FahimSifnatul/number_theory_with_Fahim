#include<bits/stdc++.h>
using namespace std;
bool check[1000003];
int n,phi[1000003];

int totient(int n)
{
 int len = sqrt(n+1);
 for(int i=2;i<=len;)
 {
     if(check[i] == false)
     {
         phi[i] = i-1;
         for(int j=(i<<1);j<=n;j+=i)
         {
             check[j] = true;
             phi[j] == 0 ? phi[j] = j-j/i : phi[j] -= phi[j]/i;
         }
     }
     i == 2 ? ++i : i+= 2;
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 totient(1000000);
 cout<<phi[12]<<endl;
 return 0;
}
















