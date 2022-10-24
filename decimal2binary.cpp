
// decimal to binary conversion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 5
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = (n & 1);              // 5 = 101 -> bit = 1
        ans = (bit * pow(10, i)) + ans; // 1 * 10^0 + 0 = 1
        // right shift = n/2
        n = n >> 1; // or
        // n /= 2; // 5 = 101, 101>>2 = 010 = 2
        i++;
    }
    cout << "ans: " << ans << endl;
}