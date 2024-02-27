#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] != 'R')
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
            else if (s2[i] == 'R')
            {
                if (s1[i] != 'R')
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
