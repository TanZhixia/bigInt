#include "../bigInt.cpp"
#include <iostream>
int main() {
    BigInt a = 41;
    BigInt b = "412";
    std::cout << (b == a) << std::endl;
    return 0;
}