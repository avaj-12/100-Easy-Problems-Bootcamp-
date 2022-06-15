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
    string n = "";
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            n = n + s[i];
        }
    }
    // cout << n;
    for (int i = 0; i < n.length(); i++)
    {
        string t = ".";
        ans = ans + t + n[i];
    }
    cout << ans;

    return 0;
}