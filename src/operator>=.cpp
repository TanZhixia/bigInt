#include "bigInt"
bool BigInt::operator>=(const std::string& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const char* s) const { return !this->operator<(s); }
bool BigInt::operator>=(const BigInt& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const int& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const long& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const long long& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const unsigned int& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const unsigned long& s) const { return !this->operator<(s); }
bool BigInt::operator>=(const unsigned long long& s) const { return !this->operator<(s); }