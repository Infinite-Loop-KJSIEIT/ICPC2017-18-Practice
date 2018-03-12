#include<bits/stdc++.h>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    
    sort(a,a+n);
    int y=n+k;
    
    y=(y+1)/2-1;
    
    cout<<a[y]<<"\n";
    }
    return 0;
   } 
