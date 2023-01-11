// Problem: P1271 【深基9.例1】选举学生会
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1271
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
void q_sort(int a[],int l,int r){
	if(l>=r)return;
	int mid=a[l+r>>1],i=l-1,j=r+1;
	while(i<j){
		do i++;while(a[i]<mid);
		do j--;while(a[j]<mid);
		if(i<j)swap(a[i],a[j]);
	}
	q_sort(a,l,j);
	q_sort(a,j+1,r);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	q_sort(a,0,m-1);
	for(int i=0;i<m;i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}