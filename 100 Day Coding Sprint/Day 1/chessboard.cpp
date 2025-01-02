#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;

    string alphabetsodd = "aceg";
    string alphabetseven = "bdfh";
    if (alphabetsodd.find(s[0]) != string::npos && s[1] % 2 != 0)
    {
        cout << "Black";
    }
    else if (alphabetseven.find(s[0]) != string::npos && s[1] % 2 == 0)
    {
        cout << "Black";
    }
    else
    {
        cout << "White";
    }
    return 0;
}