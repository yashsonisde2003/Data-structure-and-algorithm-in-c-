#include <iostream>
using namespace std;

int AND(int a, int b)
{
    cout << (a & b) << endl;
}
int OR(int a, int b)
{
    cout << (a | b) << endl;
}
int XOR(int a, int b)
{
    cout << (a ^ b) << endl;
}
int leftshift(int a, int shift)
{
    cout << (a << shift) << endl;
}
int rightshift(int a, int shift)
{
    cout << (a >> shift) << endl;
}
int hw(int n)
{
    cout << (6 & 10) << endl;
    cout << (6 | 10) << endl;
    cout << (6 ^ 10) << endl;
    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;
    // cout << n;
}

int main()
{
    // AND(4, 8);
    // OR(4, 8);
    // XOR(4, 8);
    // leftshift(4, 1);
    // rightshift(4, 1);
    // hw(10);
    cout << sizeof(int) << endl;
    ;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;
    unsigned int age=-10;
    cout<<age;//printed number is different due to unsigned int and 10 is further converted into 2's compliment and the msb of negative sign will be used as magnitude bit(0/1) which has now made the number like this 429496786
}