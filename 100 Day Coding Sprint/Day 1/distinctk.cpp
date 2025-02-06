#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string fn(vector<string> charArray, int k, int n)
{
    unordered_map<string, int> map;
    vector<string> result;
    vector<string> order;
    for (string c : charArray)
    {
        map[c]++;
        if (map[c] == 1)
        {
            order.push_back(c);
        }
    }
    for (string s : order)
    {
        if (map[s] == 1)
        {
            result.push_back(s);
        }
    }
    if (result.size() < k)
    {
        return "-1";
    }
    else
    {
        return result[k - 1];
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<string> charArray;
    for (int i = 0; i < n; i++)
    {
        string data;
        cin >> data;
        charArray.push_back(data);
    }

    int k;
    cin >> k;

    cout << fn(charArray, k, n);

    return 0;
}