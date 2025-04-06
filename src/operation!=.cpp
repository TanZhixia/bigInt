#include "bigInt"
bool BigInt::operator!=(const std::string& s) const { return this->num != s; }
bool BigInt::operator!=(const char* s) const { return this->num != s; }
bool BigInt::operator!=(const BigInt& other) const { return this->num != other.num; }
bool BigInt::operator!=(const int& n) const { return this->num != std::to_string(n); }
bool BigInt::operator!=(const long& n) const { return this->num != std::to_string(n); }
bool BigInt::operator!=(const long long& n) const { return this->num != std::to_string(n); }
bool BigInt::operator!=(const unsigned int& n) const { return this->num != std::to_string(n); }
bool BigInt::operator!=(const unsigned long& n) const { return this->num != std::to_string(n); }
bool BigInt::operator!=(const unsigned long long& n) const { return this->num != std::to_string(n); }