#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long a,b;
	    cin>>a>>b;
	    if(a%2==1&&b%2==1){
	        cout<<"No"<<endl;
	    }
	    else if(a==1&&b==1){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
