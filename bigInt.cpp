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
        BigInt(std::string num) : number(num) { this->correct(); }
        BigInt(const char* num) : number(num) { this->correct(); }
        BigInt(const BigInt& other) : number(other.number) {}
        BigInt(const int& other) : number(std::to_string(other)) {}
        BigInt(const long& other) : number(std::to_string(other)) {}
        BigInt(const long long& other) : number(std::to_string(other)) {}
        BigInt(const unsigned int& other) : number(std::to_string(other)) {}
        BigInt(const unsigned long& other) : number(std::to_string(other)) {}
        BigInt(const unsigned long long& other) : number(std::to_string(other)) {}
        operator std::string() const { return this->number; }
        operator long long() const { return std::stoll(this->number); }
        void operator=(const BigInt& other) { this->number = other.number; }
        void operator=(const std::string& other) { this->number = other; this->correct(); }
        template<typename T>
        typename std::enable_if<std::is_integral<T>::value, void>::type
        operator=(const T& other) { this->number = std::to_string(other); this->correct(); }
        bool operator==(const BigInt& other) const { return this->number == other.number; }
        bool operator==(const std::string& other) const { return this->number == other; }
        template<typename T>
        typename std::enable_if<std::is_integral<T>::value, bool>::type
        operator==(const T& other) const { return this->number == std::to_string(other); }
        template<typename T>
        bool operator!=(const T& other) const { return !(*this == other); }
        bool operator<(const BigInt& other) const { return less(this->number, other.number); }
        bool operator<(const std::string& other) const { return less(this->number, other); }
        template<typename T>
        typename std::enable_if<std::is_integral<T>::value, bool>::type
        operator<(const T& other) const { return less(this->number, std::to_string(other)); }
        template<typename T>
        bool operator>(const T& other) const { return (BigInt) other < *this; }
        template<typename T>
        bool operator<=(const T& other) const { return !(*this > other); }
        template<typename T>
        bool operator>=(const BigInt& other) const { return !(*this < other); }
        BigInt operator+(const BigInt& other) const { return BigInt(add(this->number, other.number)); }
        BigInt operator-(const BigInt& other) const { return BigInt(sub(this->number, other.number)); }
        friend std::ostream& operator<<(std::ostream& os, const BigInt& num) { return __out(os, num.number); }
        friend std::istream& operator>>(std::istream& is, BigInt& num) { return __in(is, num.number); }
};