#include "bigInt"
BigInt BigInt::operator+(const std::string& s) const {
    if (this->num[0] == '-') {
        BigInt result;
        result.num = this->num.substr(1);
        result = result.operator-(s);
        result.num = '-' + result.num;
        result.correct();
        return result;
    }
    if (s[0] == '-') return this->operator-(s.substr(1));
    std::string result = "";
    int carry = 0;
    int i = 0, j = 0;
    while (i < num.size() || j < s.size()) {
        int sum = carry;
        if (i < num.size()) sum += num[num.size() - 1 - i] - '0';
        if (j < s.size()) sum += s[s.size() - 1 - j] - '0';
        result = (char) (sum % 10 + '0') + result;
        carry = sum / 10;
        i ++;
        j ++;
    }
    if (carry) result = (char) (carry + '0') + result;
    return BigInt(result);
}
BigInt BigInt::operator+(const char* s) const { return this->operator+(std::string(s)); }
BigInt BigInt::operator+(const BigInt& other) const { return this->operator+(other.num); }
BigInt BigInt::operator+(const int& n) const { return this->operator+(std::to_string(n)); }
BigInt BigInt::operator+(const long& n) const { return this->operator+(std::to_string(n)); }
BigInt BigInt::operator+(const long long& n) const { return this->operator+(std::to_string(n)); }
BigInt BigInt::operator+(const unsigned int& n) const { return this->operator+(std::to_string(n)); }
BigInt BigInt::operator+(const unsigned long& n) const { return this->operator+(std::to_string(n)); }
BigInt BigInt::operator+(const unsigned long long& n) const { return this->operator+(std::to_string(n)); }