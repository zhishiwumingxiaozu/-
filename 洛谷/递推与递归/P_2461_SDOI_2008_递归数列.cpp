#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int main()
{
	int k;
	int a[N],b[N];
	cin>>k;
	for(auto i:k){
		cin>>a[i];
	}
	for(auto i:k){
		cin>>b[i];
	}
	int m,n,p;
	cin>>m>>n>>p;
	int sum=0;
	for(int i=m-1;i<=n-1;i++){
		sum+=a[i];
	}
	cout<<sum%p<<endl;
	return 0;
}