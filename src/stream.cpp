#include "bigInt"
std::ostream& operator<<(std::ostream& os, const BigInt& num) {
    os << num.num;
    return os;
}
std::istream& operator>>(std::istream& is, BigInt& num) {
    is >> num.num;
    num.correct();
    return is;
}