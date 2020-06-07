//        0-1 Knapsack Problem
/*
Given weights and values of n items, put these items in a knapsack of
capacity W to get the maximum total value in the knapsack.
In other words, given two integer arrays val[0..n-1] and wt[0..n-1]
which represent values and weights associated with n items respectively.
Also given an integer W which represents knapsack capacity,
find out the maximum value subset of val[] such that sum of the weights
of this subset is smaller than or equal to W. You cannot break an item,
either pick the complete item or don’t pick it (0-1 property).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,*a,*b;
  int w,j;
  cin>>n;
  cin>>w;
  a=new int[n+1];
  b=new int[n+1];
  int i;
  a[0]=0;
  b[0]=0;
  for(i=1;i<=n;i++)
    cin>>a[i];
  for(i=1;i<=n;i++)
  cin>>b[i];

  int **t;
  t=new int*[n+1];
  for(i=0;i<n+1;i++)
    t[i]=new int[w+1];

  for(i=0;i<=n;i++)
  {
    for(j=0;j<=w;j++)
    {
        if(i==0||j==0)
            t[i][j]=0;
        else if(j>=a[i])
        t[i][j]=max(t[i-1][j-a[i]]+b[i],t[i-1][j]);
        else
        {
        t[i][j]=t[i-1][j];
        }
    }
  }
  for(i=0;i<=n;i++)
  {
      cout<<endl;
      for(j=0;j<=w;j++)
        cout<<t[i][j]<<" ";
  }
  return 0;
}
