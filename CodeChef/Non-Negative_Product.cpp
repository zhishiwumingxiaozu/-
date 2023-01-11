#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long  ll;

void solve(){
        ll n ,b=0;
        cin>>n;
        vector<ll> a;
	    for(ll i=0;i<n;i++){
	        ll x;
            cin>>x;
            a.push_back(x);
	    }
        for(ll i=0;i<n;i++){
	        if(a[i]==0){
	            cout<<0<<endl;
	           return;
	        }
	        else if(a[i]<0)b++;
	    }
        
	    if(b&1)cout<<1<<endl;
	    else cout<<0<<endl;
}
int main() {
	// your code goes here
    ll t;
	cin>>t;
	while(t--){
	    solve();
	}
	
	return 0;
}
