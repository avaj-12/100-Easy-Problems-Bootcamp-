#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// const int max = 1e5 + 5;
using namespace std;
int main()
{
    cin.tie(NULL);

    int n, L, a;
    cin >> n >> L >> a; // take input of n,L,a (first line of input)
    int t1[100005], l1[100005];

    int start = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t1[i] >> l1[i]; // take input of n customers ti and li
    }

    for (int i = 0; i < n; i++)
    {
        ans += (t1[i] - start) / a;
        start = t1[i] + l1[i];
    }

    ans += (L - start) / a;

    cout << ans;

    return 0;
}