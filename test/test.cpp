#include <iostream>
#include "../src/bigInt"
using namespace std;
int main() {
    BigInt a;
    std::string b;
    cin >> a >> b;
    a *= b;
    cout << a << endl;
    return 0;
}