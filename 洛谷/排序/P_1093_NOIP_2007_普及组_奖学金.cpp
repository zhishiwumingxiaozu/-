// Problem: P1093 [NOIP2007 普及组] 奖学金
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1093
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	pair<int,int>s;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		s.push_back(a+b+c);
	}
	sort(s.begin(),s.end(),cmp);
	s.erase(unique(s.begin(),s.end()),s.end());
	
	return 0;
}
