#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<int> test(q);
    for (int i = 0; i < q; i++)
    {
        cin >> test[i];
    }

    for (int t = 0; t < q; t++)
    {
        int a, b, found = 0;
        int aInput = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == test[t])
            {
                if (aInput == 0)
                {
                    a = i;
                    found++;
                    aInput = 1;
                }
                b = i;
            }
        }
        int ans = b - a;
        aInput == 0;
        if (found > 0)
        {
            cout << ans << endl;
        }else
        {
            cout << -1 << endl;
        }
        found = 0;
    }
    return 0;
}