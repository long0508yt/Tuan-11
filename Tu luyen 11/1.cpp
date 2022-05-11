#include <algorithm>
#include <iostream>
using namespace std;
const int INTMAX = 10000;
void solve(int a[], int n)
{
    sort(a, a + n);
    for (int left = 0; left < n - 2 && a[left] <= 0; left++)
    {
        if (left > 0 && a[left] == a[left + 1])
            continue;
        int mid = left + 1, right = n - 1;
        while (mid < right)
        {
            int sum = a[left] + a[mid] + a[right];
            if (sum == 0)
            {
                cout << a[left] << " " << a[mid] << " " << a[right] << endl;
                while (mid < right && a[right] == a[right - 1])
                {
                    right--;
                }
                while (mid < right && a[mid] == a[mid + 1])
                {
                    mid++;
                }
                mid++;
                right--;
            }
            else if (sum < 0)
                mid++;
            else
                right--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[INTMAX];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(a, n);
}