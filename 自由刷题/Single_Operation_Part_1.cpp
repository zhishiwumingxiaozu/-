// Problem: Single Operation Part 1
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/SINGLEOP1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        string  s;
        cin>>s;
        int l=0,base=1;
        for(int i=s.size()-1;i>=0;i--){
            l+=base*(s[i]-'0');
            base*=2;
        }
        int res=-100;
        for(int i=1;i<=l;i++){
            res=max(l^(int)(l/pow(2,i)),res);
        }
        cout<<res<<endl;
	}
	return 0;
}
