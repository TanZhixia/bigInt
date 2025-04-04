#include "../bigInt.cpp"
#include <iostream>
int main() {
    for (int i = -1000; i < 1000; i ++)
        for (int j = -1000; j < 1000; j ++) {
            BigInt a, b;
            a = std::to_string(i);
            b = std::to_string(j);
            if (std::to_string(i + j) != (std::string)(a + b)) {
                std::cout << "Error: " << a << " + " << b << " != " << (std::string)(a + b) << std::endl;
                return 1;
            }
        }
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}