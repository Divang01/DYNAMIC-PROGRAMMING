
//                    Longest Bitonic Subsequence


/*
Given an array arr[0 … n-1] containing n positive integers,
a subsequence of arr[] is called Bitonic if it is first increasing,
then decreasing. Write a function that takes an array as argument
and returns the length of the longest bitonic subsequence.
*/

//       THIS QUESTION IS VERY SIMILAR TO LONGEST INCREASING AND
//       LONGEST DEACREASING PROBLEM.

//     TIME COMPLEXITY O(N^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int *a,n,i;
 cout<<"ENTER SIZE OF THE ARRAY\n";
 cin>>n;
 a=new int[n];
 cout<<"ENTER ELEMENTS\n";
 for(i=0;i<n;i++)
    cin>>a[i];
 int *x,*y;
 x=new int[n];
 y=new int[n];
 for(i=0;i<n;i++)
 {
   x[i]=1;
   y[i]=1;
 }
 int j;
 for(i=1;i<n;i++)
 {
     for(j=0;j<i;j++)
     {
         if(a[i]>a[j])               //CONDITION FOR LONGEST INCREASING
            x[i]=max(x[i],x[j]+1);
     }
 }

  for(i=n-2;i>=0;i--)
 {
     for(j=n-1;j>i;j--)
     {
         if(a[i]>a[j]&& y[j]+1>y[i])          //CONDITION FOR LONGEST DECREASING
            y[i]=y[j]+1;
     }
 }

 int mx;
 mx= x[0]+y[0]-1;
 for(i=1;i<n;i++)
    {
      if(mx <(x[i]+y[i]-1))
        mx=x[i]+y[i]-1;
        //cout<<max<<" ";
    }

 cout<<"OUTPUT: "<<mx;
 return 0;
}
