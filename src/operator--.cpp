#include "bigInt"
BigInt BigInt::operator--() {
    this->num = this->operator-(1).num;
    this->correct();
    return *this;
}
BigInt BigInt::operator--(int) {
    BigInt result;
    result.num = this->num;
    this->num = result.operator-(1).num;
    this->correct();
    return result;
}