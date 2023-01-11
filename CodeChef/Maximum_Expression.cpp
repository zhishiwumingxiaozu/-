#include <iostream>
using namespace std;

int a[12];

int main() {
	// your code goes here
	// 10-加号，11减号
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   string s;
	   cin>>s;
	   for(int i=0;i<s.length();i++){
	       if(s[i]>='0'&&s[i]<='9')a[s[i]-'0']++;
	       else if(s[i]=='+')s[10]++;
	       else s[11]++;
	   }
	   if(s[11]==0){
	   for(int i=9;i>-1;i++){
	           while(s[i]!=0){
	               cout<<i;
	                s[i]--;
	           }
	   }
	}
}
	for()
	return 0;
}
