// Problem: P1177 【模板】快速排序
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1177
// Memory Limit: 125 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
void q_sort(int a[],int l,int r){
	if(l>=r)return ;
	int mid=a[l+r>>1],i=l-1,j=r+1;
	while(i<j){
		do i++; while(a[i]<mid);
		do j--; while(a[j]>mid);
		if(i<j)swap(a[i],a[j]);
	}
	q_sort(a,l,j);
	q_sort(a,j+1,r);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	q_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}