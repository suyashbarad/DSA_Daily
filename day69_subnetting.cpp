#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter IPv4 Address (e.g. 192 168 10 25): ";
    cin >> a >> b >> c >> d;

    cout << "\nIP Address : " << a << "." << b << "." << c << "." << d << endl;

    if (a >= 1 && a <= 126) {
        cout << "Class : A" << endl;
        cout << "Default Mask : 255.0.0.0" << endl;
        cout << "Network Bits : 8" << endl;
        cout << "Host Bits : 24" << endl;
        cout << "Network ID : " << a << ".0.0.0" << endl;
        cout << "Host ID : " << b << "." << c << "." << d << endl;
    }
    else if (a >= 128 && a <= 191) {
        cout << "Class : B" << endl;
        cout << "Default Mask : 255.255.0.0" << endl;
        cout << "Network Bits : 16" << endl;
        cout << "Host Bits : 16" << endl;
        cout << "Network ID : " << a << "." << b << ".0.0" << endl;
        cout << "Host ID : " << c << "." << d << endl;
    }
    else if (a >= 192 && a <= 223) {
        cout << "Class : C" << endl;
        cout << "Default Mask : 255.255.255.0" << endl;
        cout << "Network Bits : 24" << endl;
        cout << "Host Bits : 8" << endl;
        cout << "Network ID : " << a << "." << b << "." << c << ".0" << endl;
        cout << "Host ID : " << d << endl;
    }
    else if (a >= 224 && a <= 239) {
        cout << "Class : D (Multicast)" << endl;
        cout << "Network Bits : Not Applicable" << endl;
        cout << "Host Bits : Not Applicable" << endl;
    }
    else if (a >= 240 && a <= 255) {
        cout << "Class : E (Experimental)" << endl;
        cout << "Network Bits : Not Applicable" << endl;
        cout << "Host Bits : Not Applicable" << endl;
    }
    else {
        cout << "Invalid IPv4 Address!" << endl;
    }

    return 0;
}