//Solution using basic for loop and iterations
#include <bits/stdc++.h>
using namespace std;

pair<int, int> findFlowerIndexes(int n, int t, vector<int> arr)
{
    // User will implement this function
    // Traversing the vector
    int a, b;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == t)
            {
                a = i;
                b = j;
                break;
            }
        }
    }
    return {b, a};
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