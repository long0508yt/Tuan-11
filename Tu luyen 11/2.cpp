#include <bits/stdc++.h>
using namespace std;

void recursion(string chars, string pre, int n, int k)
{
    if (k == 0)
    {
        set<char> s;
        for (int k = 0; k < pre.size(); k++)
        {
            s.insert(pre[k]);
        }
        if (pre.size() == s.size())
        {
            cout << pre << "\n";
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newpre;
        newpre = pre + chars[i];
        recursion(chars, newpre, n, k - 1);
    }
}
void printResult(string chars, int k, int n)
{
    recursion(chars, "", n, k);
}
int main()
{
    string a = "abcdefghijklmnopqrstuvwxyz";
    int n, k;
    cin >> n >> k;
    string chars = a.substr(0, n);
    printResult(chars, k, chars.size());
}