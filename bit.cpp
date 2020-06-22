#include <iostream>
#include <bitset>

using namespace std;

int main() {

    //bit shift, pack & unpack
    
    int a = 0b0001;
    int b = 0b1001;
    int c = 0b1101;
    int x = 0b000000000000;
    
    a = a << 8;
    b = b << 4;

    cout << bitset<12>(a) << endl;
    cout << bitset<12>(b) << endl;
    cout << bitset<12>(c) << endl;

    x = x | a;
    cout << bitset<12>(x) << endl;

    x = x | b;
    cout << bitset<12>(x) << endl;

    x = x | c;
    cout << bitset<12>(x) << endl;

    int maskA = 0b111100000000;
    int maskB = 0b000011110000;
    int maskC = 0b000000001111;

    a = (x & maskA) >> 8;
    cout << bitset<12>(a) << endl;

    b = (x & maskB) >> 4;
    cout << bitset<12>(b) << endl;

    c = (x & maskC);
    cout << bitset<12>(c) << endl;

    return 0;
}