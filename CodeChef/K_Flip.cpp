#include <iostream>
#include<math.h>
using namespace std;
int f(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x;
		cin >> x;
		string s;
		cin >> s;
		int c_1 = 0, c_0 = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 1)c_1++;
			else c_0++;
		}
		cout << sqrt(f(n) / f(n - c_0) * f(c_0))<< endl;
	}
	return 0;
}
