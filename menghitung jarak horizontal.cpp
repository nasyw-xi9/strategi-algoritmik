#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double sinA;
    double jarak;
    int g;

	cout << "masukan sudut: \n";
    cin >> s;
    cout << "masukan kecepatan: \n";
    cin >> v;
    cout << "masukan gravitasi: \n";
    cin >> g;
    sinA = sin(2 * s * 3.14 / 180) * g;
    jarak = v * sinA / 10;
   	cout << "jadi jarak yang terjauh adalah: \n";
    cout << fixed << setprecision (1) <<jarak << endl;
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

