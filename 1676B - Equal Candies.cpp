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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mn)
            {
                ans = ans + (arr[i] - mn);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
