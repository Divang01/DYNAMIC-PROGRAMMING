//                  Longest Increasing Subsequence


/*The Longest Increasing Subsequence (LIS) problem is to
find the length of the longest subsequence of a given sequence
such that all elements of the subsequence are sorted in increasing order.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *a,n,i,j;
    cout<<"ENTER SIZE OF THE ARRAY\n";
    cin>>n;
    a=new int[n];
    cout<<"ENTER ELEMENTS\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    int *b;
    b=new int[n];
    for(i=0;i<n;i++)
    b[i]=1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
          if(a[i]>a[j])
             b[i]=max(b[j]+1,b[i]);
        }
    }
   cout<<"\nLENGTH OF THE SUB SEQUENCE = "<< *max_element(b,b+n)<<"\n";
   cout<<"ELEMENTS IN B ARRAY\n";
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
   return 0;
}
