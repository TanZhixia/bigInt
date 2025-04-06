#include "bigInt"
bool BigInt::operator<(const std::string& s) const {
    if (this->num.size() != s.size()) return this->num.size() < s.size();
    return this->num < s;
}
bool BigInt::operator<(const char* s) const { return this->operator<(std::string(s)); }
bool BigInt::operator<(const BigInt& b) const { return this->operator<(b.num); }
bool BigInt::operator<(const int& n) const { return this->operator<(std::to_string(n)); }
bool BigInt::operator<(const long& n) const { return this->operator<(std::to_string(n)); }
bool BigInt::operator<(const long long& n) const { return this->operator<(std::to_string(n)); }
bool BigInt::operator<(const unsigned int& n) const { return this->operator<(std::to_string(n)); }
bool BigInt::operator<(const unsigned long& n) const { return this->operator<(std::to_string(n)); }
bool BigInt::operator<(const unsigned long long& n) const { return this->operator<(std::to_string(n)); }