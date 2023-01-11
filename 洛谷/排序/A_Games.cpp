// Problem: A. 游戏
// Contest: Codeforces - 代码部队 #164 回合（分区 2）
// URL: https://codeforces.com/contest/268/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a,b;
	while(n--){
		int x,y;
		cin>>x>>y;
		a.push_back(x),b.push_back(y);
	}
	int res=0;	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			if(a[i]==b[j])res++;
		}
	}
	cout<<res;
	return 0;
}