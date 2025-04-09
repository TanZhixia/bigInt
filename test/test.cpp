#include <iostream>
#include "../src/bigInt"
using namespace std;
int main() {
    BigInt a, b;
    cin >> a >> b;
    cout << a << endl;
    a += b;
    cout << a << endl;
    a -= b;
    cout << a << endl;
    a = a + b;
    cout << a << endl;
    a = a - b;
    cout << a << endl;
    return 0;
}