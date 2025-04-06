#include "bigInt"
BigInt& BigInt::operator=(const std::string& s) {
    this->num = s;
    this->correct();
    return *this;
}
BigInt& BigInt::operator=(const char* s) {
    this->num = s;
    this->correct();
    return *this;
}
BigInt& BigInt::operator=(const BigInt& s) {
    this->num = s.num;
    return *this;
}
BigInt& BigInt::operator=(const int& s) {
    this->num = std::to_string(s);
    return *this;
}
BigInt& BigInt::operator=(const long& s) {
    this->num = std::to_string(s);
    return *this;
}
BigInt& BigInt::operator=(const long long& s) {
    this->num = std::to_string(s);
    return *this;
}
BigInt& BigInt::operator=(const unsigned int& s) {
    this->num = std::to_string(s);
    return *this;
}
BigInt& BigInt::operator=(const unsigned long& s) {
    this->num = std::to_string(s);
    return *this;
}
BigInt& BigInt::operator=(const unsigned long long& s) {
    this->num = std::to_string(s);
    return *this;
}