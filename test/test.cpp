#include <iostream>
#include "../src/bigInt"
using namespace std;
int main() {
    BigInt a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    return 0;
}