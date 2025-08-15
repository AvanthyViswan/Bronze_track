#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = 0;
    // Calculating cost banana-by-baanana
    for (int i = 1; i <= w; i++) {
        total_cost += i * k; // i-th banana costs i*k dollars
    }
    int borrow = total_cost - n;
    if (borrow < 0)
        borrow = 0;
    cout << borrow << endl;
    return 0;
}
