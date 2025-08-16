#include <iostream>
using namespace std;
// bronze track - Team
int main() {
    int n;// n is the number of inputs
    cout<<" Enter n"<<endl;
    cin >> n;
    int count = 0;
//for each n it takes 3 integers a, b, c
    for (int i = 0; i < n; i++) {
        int a, b, c;//
        cout<< "Enter 3 integers : "<< endl;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
