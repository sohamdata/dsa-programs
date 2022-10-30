
// binary to decimal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 101
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10; // 101
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n /= 10; // 10
        i++;
    }
    cout << "ans: " << ans << endl;
}