#include "bigInt"
BigInt BigInt::operator-(const std::string& s) const {
    if (this->num[0] == '-') {
        BigInt result;
        result.num = this->num.substr(1);
        result = result.operator+(s);
        result.num = '-' + result.num;
        result.correct();
        return result;
    }
    if (s[0] == '-') return this->operator+(s.substr(1));
    if (this->num < s) {
        BigInt result = BigInt(s).operator-(this->num);
        result.num = '-' + result.num;
        result.correct();
        return result;
    }
    std::string result = "";
    int diff = 0;
    for (int i = this->num.size() - 1, j = s.size() - 1; i >= 0 || j >= 0; i --, j --) {
        int temp = this->num[i] - '0' - diff;
        diff = 0;
        if (j >= 0)
            temp -= s[j] - '0';
        if (temp < 0) {
            temp += 10;
            diff = 1;
        }
        result = std::to_string(temp) + result;
    }
    return BigInt(result);
}
BigInt BigInt::operator-(const char* s) const { return this->operator-(std::string(s)); }
BigInt BigInt::operator-(const BigInt& other) const { return this->operator-(other.num); }
BigInt BigInt::operator-(const int& n) const { return this->operator-(std::to_string(n)); }
BigInt BigInt::operator-(const long& n) const { return this->operator-(std::to_string(n)); }
BigInt BigInt::operator-(const long long& n) const { return this->operator-(std::to_string(n)); }
BigInt BigInt::operator-(const unsigned int& n) const { return this->operator-(std::to_string(n)); }
BigInt BigInt::operator-(const unsigned long& n) const { return this->operator-(std::to_string(n)); }
BigInt BigInt::operator-(const unsigned long long& n) const { return this->operator-(std::to_string(n)); }