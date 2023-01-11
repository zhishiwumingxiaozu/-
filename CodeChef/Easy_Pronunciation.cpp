#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int res=0;
    	for(int i=0;i<s.length();i++)
    	{
    	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    	    {
    	        res=0;
    	    }
    	    else res++;
    	}
    	if(res<=4)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
	}
	return 0;
}
