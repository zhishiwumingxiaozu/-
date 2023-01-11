#include <iostream>
using namespace std;
int f(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res*=i;
    }
    return res;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<</f(n-2)<<endl;
	}
	return 0;
}
