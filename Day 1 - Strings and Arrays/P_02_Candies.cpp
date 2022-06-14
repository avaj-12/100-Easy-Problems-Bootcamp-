#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        ans += num[i];
    }

    cout << ans << "\n";
    return 0;
}