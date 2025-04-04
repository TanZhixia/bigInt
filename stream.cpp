#include <iostream>
template<typename T>
std::ostream& __out(std::ostream& os, const T& number) {
    os << number;
    return os;
}