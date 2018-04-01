#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0,counter=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]+k>sum-arr[j])
	        {counter++;}
	    }
	    cout<<counter<<endl;
	}
	return 0;
}
