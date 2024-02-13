#include<bits/stdc++.h>
using namespace std;
int findPowerPrime(int fact,int p)
{
   int res=0;
   while(fact>0)
   {
       res+=fact/p;
       fact/=p;
   }
   return res;
}
int findPowerComposite(int fact,int n)
{
    int res=INT_MAX;
    for(int i=2;i<=sqrt(n);i++)
    {
       int cnt=0;
       while (n%i==0)
       {
           cnt++;
           n=n/i;
       }
       if(cnt>0)
       {
           int curr_pow=findPowerPrime(fact,i)/cnt;
           res=min(res,curr_pow);
       }
    }
    if(n>=2)
    {
        int curr_pow = findPowerPrime(fact, n);
        res = min(res, curr_pow);
    }
    return res;
}
int main()
{
     int fact = 146, n = 5;
    cout << findPowerComposite(fact, n);
    return 0;
}
