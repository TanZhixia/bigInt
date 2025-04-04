#include <string>
#include "correct.cpp"
bool less(std::string a, std::string b) {
    int len1 = a.length(), len2 = b.length();
    if (len1 != len2) return len1 < len2;
    return a < b;
}
std::string sub(std::string, std::string);
std::string add(std::string a, std::string b) {
    int carry = 0;
    std::string res = "";
    int len1 = a.length(), len2 = b.length();
    int len = std::max(len1, len2);
    if (a[0] == '-' && b[0] == '-') return __correct__return("-" + add(a.substr(1), b.substr(1)));
    if (a[0] == '-') return __correct__return(sub(b, a.substr(1)));
    if (b[0] == '-') return sub(a, b.substr(1));
    for (int i = 1; i <= len; i ++) {
        int x = (i <= len1 ? a[len1 - i] - '0' : 0);
        int y = (i <= len2 ? b[len2 - i] - '0' : 0);
        int sum = x + y + carry;
        carry = sum / 10;
        res = std::to_string(sum % 10) + res;
    }
    if (carry) res = std::to_string(carry) + res;
    return res;
}
std::string sub(std::string a, std::string b) {
    int borrow = 0;
    std::string res = "";
    int len1 = a.length(), len2 = b.length();
    int len = std::max(len1, len2);
    if (a[0] == '-' && b[0] == '-') return __correct__return("-" + sub(a.substr(1), b.substr(1)));
    if (a[0] == '-') return __correct__return("-" + add(a.substr(1), b));
    if (b[0] == '-') return add(a, b.substr(1));
    if (less(a, b)) return __correct__return("-" + sub(b, a));
    for (int i = 1; i <= len; i ++) {
        int x = (i <= len1 ? a[len1 - i] - '0' : 0);
        int y = (i <= len2 ? b[len2 - i] - '0' : 0);
        int diff = x - y - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        res = std::to_string(diff) + res;
    }
    while (res.length() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}