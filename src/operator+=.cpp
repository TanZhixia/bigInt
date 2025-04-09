#include "bigInt"
void BigInt::operator+=(const std::string& s) {
    this->num = this->operator+(s).num;
    this->correct();
}
void BigInt::operator+=(const char* s) { this->operator+=(std::string(s)); }
void BigInt::operator+=(const BigInt& s) { this->operator+=(s.num); }
void BigInt::operator+=(const int& s) { this->operator+=(std::to_string(s)); }
void BigInt::operator+=(const long& s) { this->operator+=(std::to_string(s)); }
void BigInt::operator+=(const long long& s) { this->operator+=(std::to_string(s)); }
void BigInt::operator+=(const unsigned int& s) { this->operator+=(std::to_string(s)); }
void BigInt::operator+=(const unsigned long& s) { this->operator+=(std::to_string(s)); }
void BigInt::operator+=(const unsigned long long& s) { this->operator+=(std::to_string(s)); }