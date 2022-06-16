#include <bits/stdc++.h>
using namespace std;
void fast_I_O()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << 4 << endl;
        return;
    }

    int i = 1;
    long long min = 1e12;
    for (int j = 1; j <= sqrt(n); j++)
    {
        long long k = n / i;
        if (i * k == n and i + k < min)
        {
            min = i + k;
            // cout << min << endl;
        }

        i++;
    }
    cout << 2 * min << endl;
    return;
}
int main()
{

    fast_I_O();
    int t = 1;
    while (t--)
    {
        solve();
    }
}