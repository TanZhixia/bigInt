#include <iostream>
#include "correct.cpp"
template<typename T>
std::ostream& __out(std::ostream& os, const T& number) {
    os << number;
    return os;
}
template<typename T>
std::istream& __in(std::istream& is, T& number) {
    is >> number;
    __correct(number);
    return is;
}