#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int alas;
    int tinggi;
    int luas;

    cout << "Masukkan Tinggi : ";
    cin >> tinggi;
    cout << "Masukkan Lebar alas : ";
    cin >> alas;
    luas = (int) (alas * tinggi * 0.5);
    cout << luas << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

