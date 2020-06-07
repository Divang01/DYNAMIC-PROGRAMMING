/*You are climbing a stair case and it takes A steps to reach to the top.

Each time you can either climb 1 or 2 steps.
In how many distinct ways can you climb to the top?*/

/*
A = 2 Output 1:

2 Explanation 1:

[1, 1], [2] Input 2:

A = 3 Output 2:

3 Explanation 2:

[1 1 1], [1 2], [2 1]
*/

#include<bits/stdc++.h>
using namespace std;

/*int calc(int n) //          using recursive method
{
    if(n==0)
        return 0;
   else if(n==1)
        return 1;
   else if(n==2)
        return 2;
    else
    {
        return (calc(n-1)+calc(n-2));
    }
}*/

int calct(int n) // using dynamic programming
{
    int res[n];
    res[0]=1;
    res[1]=1;
    int i,j;
    for(i=2;i<n;i++)
    {
        res[i]=0;
        for(j=1;j<=2&&j<=i;j++)
            res[i]+=res[i-j];
    }
    return res[n-1];
}
int main()
{
 int n,i;
 cout<<"ENTER THE LENGHT\n";
 cin>>n;
 int c,d;
// c=calc(n);
cout<<"TOTAL NO. OF WAYS\n";
 d=calct(n+1);
 cout<<d;
 return 0;
}
