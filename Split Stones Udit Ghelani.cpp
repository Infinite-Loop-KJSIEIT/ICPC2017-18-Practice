#include <iostream>
using namespace std;

int main() 
{   int T,a,b,c,x,y,min,p;
	 cin>>T;
	while(T-->0)
	{
	    cin>>a>>b>>c>>x>>y;
	    min=x<y?x:y;
	    p=a<b?(a<c?a:c):b<c?b:c; 
	    if(a+b+c!=x+y)
	    cout<<"NO\n";
	    else 
	    {
	        if(min<p)
	        cout<<"NO\n";
	        else
	        cout<<"YES\n";
	    }
	}
	return 0;
}
