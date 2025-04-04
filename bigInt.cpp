#include <string>
#include <iostream>
#include "stream.cpp"
#include "operation.cpp"
class BigInt {
    private:
        std::string number;
        void correct() { __correct(this->number); }
    public:
        BigInt() : number("0") {}
        BigInt(std::string num) { this->number = num; this->correct(); }

        operator std::string() const { return this->number; }
        operator int() const { return std::stoi(this->number); }
        operator long() const { return std::stol(this->number); }
        operator long long() const { return std::stoll(this->number); }

        void operator=(const BigInt& other) { this->number = other.number; }
        void operator=(const std::string& other) { this->number = other; this->correct(); }
        bool operator>(const BigInt& other) const { return less(this->number, other.number); }
        BigInt operator+(const BigInt& other) const { return BigInt(add(this->number, other.number)); }
        BigInt operator-(const BigInt& other) const { return BigInt(sub(this->number, other.number)); }
        
        friend std::ostream& operator<<(std::ostream& os, const BigInt& num) { return __out(os, num.number); }
        friend std::istream& operator>>(std::istream& is, BigInt& num) { return __in(is, num.number); }
};