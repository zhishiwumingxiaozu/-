#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s.length()==2){
            cout<<s;
        }
        else{
            int a=0,b=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='0')a++;
                else b++;
            }
            while(a!=0){
                cout<<0;
                a--;
            }
            while(b!=0){
                cout<<1;
                b--;
            }
        }
	    cout<<endl;
	}
	return 0;
}
