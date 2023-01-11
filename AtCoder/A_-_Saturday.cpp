#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int res = 0;
    string s;
    cin >> s;
    if (s == "Monday" )res = 5;
    else if (s == "Tuesday") res = 4;
    else if (s == "Wednesday") res = 3;
    else if (s == "Thursday")res = 2;
    else if (s == "Friday")res = 1;
    cout << res;

    return 0;
}