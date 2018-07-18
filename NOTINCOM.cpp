//USER ID:- fakeaccount007
// Problem Code:- NOTINCOM
// Problem obtained from:- CODECHEF(Beginner)
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, i, count = 0;
        cin >> n >> m;
        long long int a[n], b[m];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b, b + m);
        for (i = 0; i < n; i++)
        {
            if (binary_search(b, b + m, a[i]))
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
