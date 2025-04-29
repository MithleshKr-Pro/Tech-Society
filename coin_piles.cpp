#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (((a > 0 && b > 0) || (a == 0 && b == 0)) && (a + b) % 3 == 0 && (min(a, b) >= (a + b) / 3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}