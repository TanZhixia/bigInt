#include "bigInt"
BigInt BigInt::operator*(const std::string& s) const {
    if (this->num[0] == '-') {
        BigInt result;
        result.num = this->num.substr(1);
        result = result.operator*(s);
        result.num = '-' + result.num;
        result.correct();
        return result;
    }
    if (s[0] == '-') {
        BigInt result;
        result.num = s.substr(1);
        result = this->operator*(result);
        result.num = '-' + result.num;
        result.correct();
        return result;
    }
    int* a = new int[this->num.size()];
    int* b = new int[s.size()];
    for (int i = 0; i < this->num.size(); i ++)
        a[i] = this->num[this->num.size() - 1 - i] - '0';
    for (int i = 0; i < s.size(); i ++)
        b[i] = s[s.size() - 1 - i] - '0';
    int* c = new int[this->num.size() + s.size() + 1];
    for (int i = 0; i < this->num.size() + s.size() + 1; i ++)
        c[i] = 0;
    for (int i = 0; i < this->num.size(); i ++)
        for (int j = 0; j < s.size(); j ++) {
            c[i + j] += a[i] * b[j];
            c[i + j + 1] += c[i + j] / 10;
            c[i + j] %= 10;
        }
    std::string result = "";
    for (int i = this->num.size() + s.size(); i >= 0; i --)
        result += c[i] + '0';
    BigInt r = result;
    r.correct();
    delete[] a;
    delete[] b;
    delete[] c;
    return r;
}
BigInt BigInt::operator*(const char* s) const { return this->operator*(std::string(s)); }
BigInt BigInt::operator*(const BigInt& s) const { return this->operator*(s.num); }
BigInt BigInt::operator*(const int& s) const { return this->operator*(std::to_string(s)); }
BigInt BigInt::operator*(const long& s) const { return this->operator*(std::to_string(s)); }
BigInt BigInt::operator*(const long long& s) const { return this->operator*(std::to_string(s)); }
BigInt BigInt::operator*(const unsigned int& s) const { return this->operator*(std::to_string(s)); }
BigInt BigInt::operator*(const unsigned long& s) const { return this->operator*(std::to_string(s)); }
BigInt BigInt::operator*(const unsigned long long& s) const { return this->operator*(std::to_string(s)); }