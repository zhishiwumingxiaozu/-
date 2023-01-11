// Problem: P1157 组合的输出
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1157
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int n,m,p[110];
void dfs(int x){
	if(p[0]==m){
		for(int j=1;j<=p[0];j++){
			cout<<"  "<<p[j];
		}
		cout<<endl;
		return ;
	}
	for(int i=x;i<=n;i++){
		p[++p[0]]=i;
		dfs(i+1);
		p[p[0]--]=0;
	}
}
int main()
{
	cin>>n>>m;
	dfs(1);
	return 0;
} 