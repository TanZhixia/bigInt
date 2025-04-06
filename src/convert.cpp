#include "bigInt"
BigInt::operator std::string() const { return this->num; }
BigInt::operator const char*() const { return this->num.c_str(); }
BigInt::operator int() const { return std::stoi(this->num); }
BigInt::operator long() const { return std::stol(this->num); }
BigInt::operator long long() const { return std::stoll(this->num); }
BigInt::operator unsigned int() const { return std::stoul(this->num); }
BigInt::operator unsigned long() const { return std::stoul(this->num); }
BigInt::operator unsigned long long() const { return std::stoull(this->num); }