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
        int *a = new int(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int flag = 0;
        for (int i = 0; i < n && flag == 0; i++)
            for (int j = 0; j < n && flag == 0; j++)
                for (int k = 0; k < n && flag == 0; k++)
                    if ((i != k && k != j && i != j) && a[i] + a[j] == a[k])
                    {
                        cout << i << ',' << j << ',' << k;
                        flag = 1;
                    }
        if (flag == 0)
            cout << "No sequence found\n";
    }
    return 0;
}
