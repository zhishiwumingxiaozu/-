// Problem: A - 与运算
// Contest: Virtual Judge - 从入门到头秃周末休闲赛134
// URL: https://vjudge.net/contest/520483#problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll res = n, r=n;
		while (n--) {
			res = res & n;
			if (res == 0) {
				r = min(r,n);
				break;
			}
			
		}
		cout << r << endl;
	}


	return 0;
}