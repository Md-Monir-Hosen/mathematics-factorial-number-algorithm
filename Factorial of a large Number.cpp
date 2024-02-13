#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int multiply(int x,int res[],int s)
{
    int carry=0;
    for(int i=0;i<s;i++)
    {
      int prod=res[i]*x+carry;
      res[i]=prod%10;
      carry =prod/10;
    }
    while(carry)
    {
      res[s]=carry%10;
      carry =carry/10;
      s++;
    }
    return s;
}
void factorial(int n)
{
    int res[MAX];
    res[0]=1;
    int s=1;
    for(int i=2;i<=n;i++)
    {
      s= multiply(i,res,s);
    }
    cout<<"Factorial of a given number is \n";
    for(int j=s-1;j>=0;j--)
    {
        cout<<res[j]<<" ";
    }
}
int main()
{
     factorial(100);
    return 0;
}
