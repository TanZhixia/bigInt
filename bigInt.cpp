#include <string>
#include <iostream>
#include "correct.cpp"
#include "stream.cpp"
class BigInt {
    private:
        std::string number;
        void correct() { __correct(this->number); }
    public:
        BigInt(std::string num) { this->number = num; this->correct(); }
        operator std::string() const { return this->number; }
        operator int() const { return std::stoi(this->number); }
        operator long() const { return std::stol(this->number); }
        operator long long() const { return std::stoll(this->number); }
        friend std::ostream& operator<<(std::ostream& os, const BigInt& num) { return __out(os, num.number); }
        
};