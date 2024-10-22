#include <iostream>
using namespace std;
// this practice includes codes written in lecture 6 binary number system.
int prime_or_not(int num)
{
    bool isprime = true;
    for (int i = 2; i * i <= num; i++) // 1 to under root n
    {
        if (num % i == 0)
        {
            isprime = false;
        }
    }
    return isprime;
}

int fibonnaci(int n)
{
    int t1 = 0, t2 = 1, nexterm;
    cout << "fibonnacci series:- " << t1 << " , " << t2;

    for (int i = 1; i <= n; i++)
    {
        nexterm = t1 + t2;
        cout << " , " << nexterm;
        t1 = t2;
        t2 = nexterm;
    }
}

int prime_upto_n(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (prime_or_not(i + 1) == 1)
        {
            cout << i + 1 << " ";
        }
    }
}
// to reslove the problem of reverse printing of the divided digit's reminder we will find the binary digit with each of them multiplying to the ones(1), ten's(10^0) ,hundered's(10^1) and at end when they all be finally added together they will form the binary number straight.
int dec_to_binary(int num)
{
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int rem = num % 2;  // getting the reminder
        num = num / 2;      // getting the quotient after getting reminder and updating the num
        ans += (rem * pow); // doing the same thing as written above
        pow *= 10;          // update the power by multiplying 10 and making it ones(1), ten's(10^0) ,hundered's(10^1) and so on.
    }
    return ans; // returning the final binary conversion
}

int decimal_binary(int num)
{
    int ans = 0, n = 4;
    for (int i = 0; i < n; i++)
    {
        int individualnum = num / 10;
        num = individualnum;
        cout << individualnum;
    }
}

int binary_to_decimal(int num){
    int ans=0,pow=1;
    while(num>0){
        int individualNum=num%10;//breaking down of individual number from binary number
        ans+=(individualNum*pow);//multiplication of individualNum with pow and its adition will make the number in decimal
        num=num/10;//updation of previous number to new number
        pow*=2;//updation of power from 2^0=>2^1=>2^2=>2^3
    }
    return ans;
}

int main()
{
    // prime_upto_n(120);
    // cout<<dec_to_binary(10);
    // int n = 10;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dec_to_binary(i);
    //     cout << endl;
    // }
    cout<<binary_to_decimal(1001);
    // cout << prime_or_not(4);
    // fibonnaci(12);
    return 0;
}
