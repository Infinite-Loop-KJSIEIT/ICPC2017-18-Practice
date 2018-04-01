#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string sample1 = "chef";
	int counter = 0;
	while(n--)
	{
	    string input;
	    cin>>input;
	    int len = input.size();
	    for (int i=0;i<3;i++)
	    {
	        for(int j=0;j<len-1;j++)
	        {
	            if(input[j]==sample1[i]&&input[j+1]==sample1[i+1])
	            {
	                counter++;
	                goto l1;
	            }
	        }
	    }
	    l1: ;
	}
	cout<< counter;
	return 0;
}
