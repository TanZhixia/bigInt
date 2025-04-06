#include "bigInt"
void BigInt::correct() {
    bool neg = false;
    if (this->num.size() == 0) {
        this->num = "0";
        return;
    }
    while (this->num[0] == '-') {
        neg = !neg;
        this->num.erase(0, 1);
    }
    while (this->num.size() > 1 && this->num[0] == '0')
        this->num.erase(0, 1);
    if (neg && this->num[0] != '0')
        this->num = "-" + this->num;
}