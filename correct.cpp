#include <string>
void __correct(std::string& number) {
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
}