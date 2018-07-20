//https://www.spoj.com/problems/INTEST/
//A pretty Nice Problem to demonstrate FastI/O methods

//#include <bits/stdc++.h>
// I am commenting out <bits/stdc++.h> coz it's the library of all libraries
//Including such large libraries takes time..
//it's better to include libraries one by one.

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //it is often recommended to use scanf/printf instead of cin/cout
    //But you can still use cin/cout if you include the above line in your code
    //this stops the synchronization of c++ input methods with C input methods if used before your first input/output line of code
    cin.tie(0);
    cout.tie(0);
    // .tie(0) decreases runtime drastically
    // the tie function is just like the void(update) function of C#
    //The void update runs for every frame produced... just like that,
    //the tie function checks for input and output before and after every cin and cout function
    //the default value is true
    srand(time(0));
    long long int n, k, count = 0;
    cin >> n >> k;
    while (n--)
    {
        long long int t;
        cin >> t;
        if (t % k == 0)
        {
            count++;
        }
    }
    cout<<count;
    //It's faster to use "\n" instead of endl;
    return 0;
}
