//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
//watermelon question
//input and output format
//input The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys. Output Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int direct = abs(a - b);
    int Teleporter1 = abs(a - x) + abs(b - y);
    int Teleporter2 = abs(a - y) + abs(b - x);

    // Using nested min for three values
    int ans = min(min(direct, Teleporter1), Teleporter2);

    cout << ans << endl;
    return 0;
}
