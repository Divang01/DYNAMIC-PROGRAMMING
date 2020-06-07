//                  Longest Common Subsequence

/*
    ex   s1=  "AGGTAB"
         s2=  "GXTXAYB"
         output: 4    (G T A B)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,n,m,j;
  string ch1,ch2,x="0",y="0";
  cin>>ch1>>ch2;
  ch1=x+ch1;
  ch2=y+ch2;
  n=ch1.size();
  m=ch2.size();
 // cout<<n<<" "<<m;
  int **a;
  a=new int*[m];
  for(i=0;i<m;i++)
    a[i]=new int[n];
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
        if(i==0||j==0)
            a[i][j]=0;
        else if(ch2[i]==ch1[j])
            a[i][j]=a[i-1][j-1]+1;
        else
            a[i][j]=max(a[i][j-1],a[i-1][j]);
      }
  }
  cout<<a[m-1][n-1];
  i=m-1;
  j=n-1;
  stack<char>s;
  while(i>0)
  {
    if(a[i][j]==max(a[i][j-1],a[i-1][j]))
        {
            if(a[i][j]==a[i][j-1])
                j--;
            else
                i--;
        }
    else
       {
           cout<<ch2[i];
           i--;
           j--;
       }

  }
  return 0;
}
