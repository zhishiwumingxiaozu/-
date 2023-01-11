// Problem: Building Race
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/BUILDINGRACE
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
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    double t1,t2;
	    t1=a/x;
	    t2=b/y;
	    if(abs(t1-t2)<1e-5)cout<<"Both"<<endl;
	    else if(t1>t2)cout<<"Chefina"<<endl;
	    else cout<<"Chef"<<endl;
	}
	return 0;
}
