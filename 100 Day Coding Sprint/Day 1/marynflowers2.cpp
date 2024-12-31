#include <bits/stdc++.h>
using namespace std;

pair<int, int> findFlowerIndexes(int n, int t, vector<int> arr)
{
    // User will implement this function
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == t)
        {
            return {left, right};
        }

        else if (sum < t)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return {-1, -1};
}

int main()
{
    int n, t;
    cin >> n >> t;      // initializing the variables
    vector<int> arr(n); // initialize the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> result = findFlowerIndexes(n, t, arr);
    cout << result.first << " " << result.second; // print the two indexes

    return 0;
}