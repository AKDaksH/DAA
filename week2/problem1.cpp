#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> key;
        int start = 0, end = n - 1, count = 0, mid;
        while (start < end)
        {
            mid = (start + end) / 2;
            if (a[mid] == key)
            {
                count++;
                break;
            }
            else if (a[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }
        for (int i = mid + 1; a[i] == key; i++)
            count++;
        for (int i = mid - 1; a[i] == key; i--)
            count++;

        if (count)
            cout << key << "-" << count << endl;
        else
            cout << "Key not present" << endl;
    }
    return 0;
}
