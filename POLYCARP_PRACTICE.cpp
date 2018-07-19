//ID:- anupreet.bhatia
//Question: Polycarp's Practice (Codeforces Round #498, Div 3)
//Website:- codeforces.com
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            arr[i] = 0;
            return i;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n, k, i, max = 0;
    cin >> n >> k;
    int arr[n], out[k], temp[n], max_arr[k];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp, temp + n);
    for (i = 0; i < k; i++)
    {
        max_arr[i] = temp[n + i - k];
        max = max + max_arr[i];
    }
    cout << max << endl;
    for (i = 0; i < k; i++)
    {
        out[i] = search(arr, n, max_arr[i]);
    }
    sort(out, out + k);
    if (k == 1)
    {
        cout << n;
        return 0;
    }
    if (k > 1)
        cout << out[1] << " ";
    for (i = 1; i < k - 1; i++)
    {
        cout << out[i + 1] - out[i] << " ";
    }
    cout << n - out[k - 1];
    return 0;
}
