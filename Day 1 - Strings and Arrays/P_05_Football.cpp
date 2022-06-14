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
    int count = 1;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}