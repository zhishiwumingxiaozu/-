// Problem: P1059 [NOIP2006 普及组] 明明的随机数
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1059
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	while(n--){
		int t;
		cin>>t;
		a.push_back(t);
	}
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}