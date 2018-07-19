//USER ID:- fakeaccount007
// Problem Code:- SURVIVE
// Problem obtained from:- CODECHEF(Beginner)
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        int choc_req = k * s;
        int available = n * (s - (s / 7));
        if (available >= choc_req)
            cout << ceil(choc_req / float(n)) << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
