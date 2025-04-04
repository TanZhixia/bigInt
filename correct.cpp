#ifndef CORRECT_CPP
#define CORRECT_CPP
#include <string>
void __correct(std::string& number) {
    bool neg = false;
    if (number.empty())
        number = "0";
    if (number[0] == '+')
        number.erase(0, 1);
    while (number[0] == '-') {
        neg = !neg;
        number.erase(0, 1);
    }
    while (number.size() > 1 && number[0] == '0')
        number.erase(0, 1);
    if (neg)
        number = "-" + number;
    if (number.size() == 2 && number[0] == '-' && number[1] == '0')
        number = "0";
}
std::string __correct__return(std::string number) {
    bool neg = false;
    if (number.empty())
        number = "0";
    if (number[0] == '+')
        number.erase(0, 1);
    if (number[0] == '-') {
        neg = true;
        number.erase(0, 1);
    }
    while (number.size() > 1 && number[0] == '0')
        number.erase(0, 1);
    if (neg)
        number = "-" + number;
    if (number.size() == 2 && number[0] == '-' && number[1] == '0')
        number = "0";
    return number;
}
#endif