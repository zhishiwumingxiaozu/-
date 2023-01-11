// Problem: A - A
// Contest: Virtual Judge - CSU-ACM2022秋季入门题集
// URL: https://vjudge.net/contest/519480#problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>

using namespace std;
const int N=2e5+10;
int a[N];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=2*n;i++){
			cin>>a[i];
		}
		sort(a + 1, a + 2 * n + 1);
		cout<<a[n+1]-a[n]<<endl;
	}
	
	return 0;
}