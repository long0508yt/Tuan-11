#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

void recursion(string s, int n, string res = "")
{
    if (n == 0)
        cout << res << endl;
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            recursion(s, n - 1, res + s[i]);
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    string chars = "";
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        chars += ch;
    }

    sort(chars.begin(), chars.end());

    for (int i = k; i >= 1; i--)
        recursion(chars, i);
    return 0;
}