#include "bigInt.cpp"
BigInt::BigInt() : num("0") {}
BigInt::BigInt(const std::string& s) : num(s) { BigInt::correct(); }
BigInt::BigInt(const BigInt& other) : num(other.num) {}
BigInt::BigInt(const int& n) : num(std::to_string(n)) {}
BigInt::BigInt(const long& n) : num(std::to_string(n)) {}
BigInt::BigInt(const long long& n) : num(std::to_string(n)) {}
BigInt::BigInt(const unsigned int& n) : num(std::to_string(n)) {}
BigInt::BigInt(const unsigned long& n) : num(std::to_string(n)) {}
BigInt::BigInt(const unsigned long long& n) : num(std::to_string(n)) {}