#include<iostream>
using namespace std;
int DecimalToBinary(int decimal) {
    int binary = 0;
    int base = 1; // 10^0

    while (decimal > 0) {
        int lastDigit = decimal % 2;
        binary += lastDigit * base;
        base *= 10;
        decimal /= 2;
    }

    return binary;
}
int main() {
    int decimalNumber;
    cout<<"Enter a decimal number: ";
    cin>>decimalNumber;
    int binaryNumber = DecimalToBinary(decimalNumber);
    cout << "Binary equivalent of decimal " << decimalNumber << " is " << binaryNumber << endl;
    return 0;
}