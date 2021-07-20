#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll a[1000005] = {};
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, tmp, cnt = 0;
        for (int i = 0; i < 1e6 + 5; i++) a[i] = 0;
        cin >> n >> k;
 
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[tmp]++;
        }
 
        ll k2 = k / 2;
        if (k % 2 == 0)
        {
            k2 = a[k2];
            cnt += k2 * (k2 - 1) / 2;
			k2 = k / 2;
        }
        else
			k2 = k / 2 + 1;
 
        for (int i = 0; i < k2; i++)
        {
            // cout << a[i] << " " << a[k - i] << " " << a[i] * a[k - 1] << endl;
            cnt += a[i] * a[k - i];
        }
        cout << cnt << endl;
    }
}