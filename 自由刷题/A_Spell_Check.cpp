#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag_1 = 0, flag_2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'T')flag_1 = 1;
            if (s[i] - 'A' <= 26&&s[i]!='T')flag_2 = 1;
        }
        if (s.length()==5&&flag_1 == 1 && flag_2 == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}