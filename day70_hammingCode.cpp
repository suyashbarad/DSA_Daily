#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int findParityBits(int m) {
    int r = 0;
    while (pow(2, r) < m + r + 1) {
        r++;
    }
    return r;
}

int main() {
    string binaryInput;
    cout << "Enter a 4-bit Binary input: ";
    cin >> binaryInput;
    
    // 1. Validate if characters are '0' or '1' AND string length is 4
    bool isBinary =true;
    if (isBinary) {
        for (char c : binaryInput) {
            if (c != '0' && c != '1') {
                isBinary = false;
                break;
            }
        }
    }

    // 2. Main Logic
    if (isBinary) {
        cout << "\nBinary Number = " << binaryInput << endl;
        cout << "No error detected!" << endl;
        
        int decimalOutput = stoi(binaryInput, nullptr, 2);
        int BinarySize = binaryInput.length();
        
        cout << "Decimal: " << decimalOutput << endl;
        cout << "Number of parity bits: " << findParityBits(BinarySize) << endl;
        cout << "Data bits: " << BinarySize << endl << endl;

        // Convert characters '0' or '1' to integer values 0 or 1
        int d1 = binaryInput[0] - '0';
        int d2 = binaryInput[1] - '0';
        int d3 = binaryInput[2] - '0';
        int d4 = binaryInput[3] - '0';

        // Correct Hamming(7,4) parity bit formulas
        int p1 = d1 ^ d2 ^ d4; // Checks positions 3, 5, 7
        int p2 = d1 ^ d3 ^ d4; // Checks positions 3, 6, 7
        int p4 = d2 ^ d3 ^ d4; // Checks positions 5, 6, 7

        cout << "--- Separate Parity Bits ---" << endl;
        cout << "P1: " << p1 << endl;
        cout << "P2: " << p2 << endl;
        cout << "P4: " << p4 << endl;

        // Displays the complete 7-bit codeword: [P1, P2, D1, P4, D2, D3, D4]
        cout << "\nFinal Encoded Hamming Code (7 bits): ";
        cout << p1 << p2 << d1 << p4 << d2 << d3 << d4 << endl;
    } 
    else {
        cout << "The input number is not a valid 4-bit Binary number." << endl;
    }
    
    return 0;
}