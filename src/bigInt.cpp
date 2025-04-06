#include <istream>
#include <ostream>
#include <string>
class BigInt {
    private:
        std::string num;
    public:
        void correct();
        BigInt();
        BigInt(const std::string& s);
        BigInt(const BigInt& s);
        BigInt(const int& s);
        BigInt(const long& s);
        BigInt(const long long& s);
        BigInt(const unsigned int& s);
        BigInt(const unsigned long& s);
        BigInt(const unsigned long long& s);
        friend std::ostream& operator<<(std::ostream& os, const BigInt& s);
        friend std::istream& operator>>(std::istream& is, BigInt& s);
};