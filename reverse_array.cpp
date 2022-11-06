#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}