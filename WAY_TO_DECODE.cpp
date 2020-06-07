//A message containing letters from A-Z is being encoded to numbers using the following mapping:
/*
'A' -> 1
'B' -> 2
...
'Z' -> 26


Input 1:
    A = "8"

Output 1:
    1

Explanation 1:
    Given encoded message "8", it could be decoded as only "H" (8).

    The number of ways decoding "8" is 1.

Input 2:
    A = "12"

Output 2:
    2

Explanation 2:
    Given encoded message "12", it could be decoded as "AB" (1, 2) or "L" (12).

    The number of ways decoding "12" is 2.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int *ch;
 int i,n;
 cout<<"ENTER THE LENGTH\n";
 cin>>n;
 cout<<"ENTER CODES WITH SPACING\n";
 ch=new int[n];
 for(i=0;i<n;i++)
 cin>>ch[i];
 int *a=new int[n+1];
 a[0]=1;
 a[1]=1;
 for(i=2;i<n+1;i++)
 {
   a[i]=0;
   if(ch[i-1]>0)
    a[i]=a[i-1];
   if(ch[i-2]==1||(ch[i-2]==2&&ch[i-1]<7))
    a[i]=a[i]+a[i-2];
 }
   cout<<"OUTPUT\n";
    cout<<a[n]<<" ";
 return 0;
}
