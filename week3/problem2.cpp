#include <iostream>
using namespace std;

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
        int comp = 0, swap = 0;
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[min])
                    min = j;
                comp++;
            }
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
            swap++;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\ncomparisons = " << comp << "\nswap = " << swap;
    }
    return 0;
}
