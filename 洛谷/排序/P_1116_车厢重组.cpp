// Problem: P1116 车厢重组
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1116
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int a[N]={0};
int cnt=0;
void q_sort(int a[],int l,int r){
	if(l>=r)return;
	int mid=a[l+r>>1],i=l-1,j=r+1;
	while(i<j){
		do i++;while(a[i]<mid);
		do j--;while(a[j]>mid);
		if(i<j){
			swap(a[i],a[j]);
			cnt++;
		}
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
	cout<<cnt<<endl;
	return 0;
}