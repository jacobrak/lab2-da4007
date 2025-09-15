// Question 1
// bool; 0 or 1
// int; whole numbers from −2 147 483 648 to 2 147 483 647
// unsigned; whole numbers from 0 to 4,294,967,295
// short; whole numbers from -32767 to 32767
// float; 7 decimal digits precision
// double; 15 decimal digits precision
// char; 1 character

// Question 2
// char is explained above
// string; stores and manipulates character-like objects 32 bytes
// "" is 1 byte
// "x" is 2 bytes
// "da40047" is 7 bytes
#include <iostream>
using namespace std;

int main() {
    cout << "size of bool " << sizeof(bool) << endl;
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of unsigned: " << sizeof(unsigned) << endl;
    cout << "size of short: " << sizeof(short) << endl;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "size of char: " << sizeof(char) << endl;
    cout << "size of string: " << sizeof(string) << endl;
    cout << endl;


    cout << "size of empty string: " << sizeof("") << endl;
    cout << "size of x string: " << sizeof("x") << endl;
    cout << "size of DA4007 string: " << sizeof("DA4007") << endl;
    return 0;
}

