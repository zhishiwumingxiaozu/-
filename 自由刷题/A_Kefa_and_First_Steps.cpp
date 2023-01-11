// Problem: A. Kefa and First Steps
// Contest: Codeforces - Codeforces Round #321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int >a;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	int i = 0, j = 1, flag = 1, res = -1;
	while (j<a.size()) {
		int len = 0;
		if(a[i]<=a[j]){
            i++;
            j++;
            len++;
        }
        else {
            len=0;
            i=j;
            j++;
        }
		res = max(res, len);
	}
	cout << res;
}