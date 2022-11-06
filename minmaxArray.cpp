#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int minArray(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[7] = {1, 2, 45, 123, 5, 12, 3};
    cout << minArray(arr, 7) << endl;
    cout << maxArray(arr, 7);
}