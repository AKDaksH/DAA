#include <iostream>
using namespace std;
bool binarysearch(int *a, int l, int n, int key)
{
    int start = l, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return true;
        }
        else if (a[mid] < key)
            start = mid + 1;
        else if (a[mid] > key)
            end = mid - 1;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = false, flag2 = false;
        for (int i = 0; i < n; i++)
        {
            flag = binarysearch(a, 0, i - 1, a[i]);
            flag2 = binarysearch(a, i + 1, n - 1, a[i]);
            if (flag || flag2)
            {
                cout << "YES";
                break;
            }
        }
        if (!flag && !flag2)
            cout << "FALSE";
    }
    return 0;
}
