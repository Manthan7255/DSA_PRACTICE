#include<iostream>
using namespace std;
int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; // 2^0

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}
int main() {
    int binaryNumber;
    cout<<"Enter a binary number: ";
    cin>>binaryNumber;
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent of binary " << binaryNumber << " is " << decimalNumber << endl;
    return 0;
}