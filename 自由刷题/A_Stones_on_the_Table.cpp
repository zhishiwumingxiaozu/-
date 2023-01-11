// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> n;
	cin >> s;
	int res, r = 0, g = 0, b = 0;
	for (int i = 0; i < s.size();i++) {
		if (s[i] == 'R')r++;
		else if (s[i] == 'B')b++;
		else if (s[i] == 'G')g++;
	}
	if (r != 0 && b != 0)res = min(r, b);
	else res = max(r, b);
	if (g != 0)res = min(res, g);
	if (r == b && r == g && b == g)cout << 0;
	else cout << res;
	return 0;
}