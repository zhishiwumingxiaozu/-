// Problem: P1923 【深基9.例4】求第 k 小的数
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1923
// Memory Limit: 250 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int N=5000010;
int a[N];
void q_sort(int a[],int l,int r){
	if(l>=r)return;
	int mid=a[l+(r-l)/2],i=l-1,j=r+1;
	while(i<j){
		do i++;while(a[i]<mid);
		do j--;while(a[j]>mid);
		if(i<j)swap(a[i],a[j]);
	}
	q_sort(a,l,j);
	q_sort(a,j+1,r);
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	q_sort(a,0,n-1);
	cout<<a[k-1];
	return 0;
}