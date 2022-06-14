#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    string s;
    cin >> s;

    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
            s[i] += 32;
        if (a[i] < 97)
            a[i] += 32;
    }

    if (a == s)
        cout << 0;
    else if (a > s)
        cout << -1;
    else
        cout << 1;

    return 0;
}