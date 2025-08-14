#include <iostream>
using namespace std;
// watermelon question 

int main() {
    int w;
    cout<< "Enter the weight : ";
    cin >> w;
    if (w > 2 && w % 2 == 0)
        cout << "YES"<<endl;
    else
        cout << "NO" <<endl;
    return 0;
}
