//USER ID:- fakeaccount007
// Problem Code:- SINS
// Problem obtained from:- CODECHEF(Beginner)
#include <bits/stdc++.h>
using namespace std;

long long int solve(int x, int y)
{
    if (x == 0 || y == 0 || x == y)
        return x + y;
    if (max(x, y) % min(x, y) != 0)
        return solve(min(x, y), max(x, y) % min(x, y));
    return 2 * min(x, y);
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}