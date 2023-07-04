#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = -99999999, min = 10000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
        }
    cout << "max : " << max << " ,"
         << "min : " << min << endl;

    return 0;
}