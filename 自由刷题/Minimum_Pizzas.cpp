// Problem: Minimum Pizzas
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/MINPIZZA
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int res=n*x/4;
	    if(n*x%4!=0){
	    	res++;
	    	cout<<res<<endl;
	    }
	    else cout<<n*x/4<<endl;
	}
	return 0;
}
