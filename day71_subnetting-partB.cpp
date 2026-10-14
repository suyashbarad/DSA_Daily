#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int o1, o2, o3, o4;
    char dot;
    int cidr;

    // 1. Get user input for Base IP and CIDR prefix
    cout << "Enter base IP address (e.g., 192.168.10.0): ";
    cin >> o1 >> dot >> o2 >> dot >> o3 >> dot >> o4;

    cout << "Enter CIDR prefix (e.g., 26 for /26): ";
    cin >> cidr;

    // Validate for Class C subnetting range
    if (cidr < 24 || cidr > 30) {
        cout << "Error: This program currently supports Class C subnetting (CIDR 24 to 30)." << endl;
        return 1;
    }

    // 2. Calculate the core subnetting details
    int hostBits = 32 - cidr;
    int blockSize = pow(2, hostBits);
    int numSubnets = 256 / blockSize;
    int usableHosts = blockSize - 2;
    int lastOctetMask = 256 - blockSize;

    // Display general subnet information
    cout << "\n--- General Subnet Information ---" << endl;
    cout << "Calculated Subnet Mask : 255.255.255." << lastOctetMask << endl;
    cout << "Total Usable Hosts     : " << usableHosts << " per subnet" << endl;
    cout << "Total Subnets Created  : " << numSubnets << "\n" << endl;

    // 3 & 4. Calculate and Display specifics for each subnet
    for (int i = 0; i < numSubnets; ++i) {
        int network = i * blockSize;
        int firstHost = network + 1;
        int lastHost = network + usableHosts;
        int broadcast = network + blockSize - 1;

        cout << "=========================================" << endl;
        cout << "Subnet " << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Network Address   : " << o1 << "." << o2 << "." << o3 << "." << network << endl;
        cout << "First Host        : " << o1 << "." << o2 << "." << o3 << "." << firstHost << endl;
        cout << "Last Host         : " << o1 << "." << o2 << "." << o3 << "." << lastHost << endl;
        cout << "Broadcast Address : " << o1 << "." << o2 << "." << o3 << "." << broadcast << endl;

        // Print all usable IP addresses in this subnet
        cout << "\nUsable IP Addresses:" << endl;
        for (int j = firstHost; j <= lastHost; ++j) {
            cout << "  " << o1 << "." << o2 << "." << o3 << "." << j << endl;
        }
        cout << endl;
    }

    return 0;
}