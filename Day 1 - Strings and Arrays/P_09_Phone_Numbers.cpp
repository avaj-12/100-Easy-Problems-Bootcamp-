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
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '8')
            count++;
    }
    // cout << count << " ";
    if (n / 11 < count)
    {
        int ans = n / 11;
        cout << ans;
    }
    else
        cout << count;

    return 0;
}