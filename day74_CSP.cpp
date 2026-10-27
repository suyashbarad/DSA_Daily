#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
do {
int s = digits[0];
int e = digits[1];
int n = digits[2];
int d = digits[3];
int m = digits[4];
int o = digits[5];
int r = digits[6];
int y = digits[7];
if (s == 0 || m == 0) {
continue;
}
int send = s * 1000 + e * 100 + n * 10 + d;
int more = m * 1000 + o * 100 + r * 10 + e;
int money = m * 10000 + o * 1000 + n * 100 + e * 10 + y;
if (send + more == money) {
cout << "S = " << s << endl;
cout << "E = " << e << endl;
cout << "N = " << n << endl;
cout << "D = " << d << endl;
cout << "M = " << m << endl;
cout << "O = " << o << endl;
cout << "R = " << r << endl;
cout << "Y = " << y << endl;
cout << endl;
cout << " " << send << endl;
cout << "+ " << more << endl;
cout << "------" << endl;
cout << " " << money << endl;
break;
}
} while (next_permutation(digits.begin(), digits.end()));
return 0;
}