#include <iostream>
using namespace std;

int reversal_of_number(int num)
{
    int reversed = 0;//it will not reset as it is not in the loop so it will work as appending of numbers reversibly
    while (num > 0)
    {
        int rem = num % 10; //getting each digit from number
        reversed = reversed * 10 + rem;// it's sort of adding number in integer varibale from back
        num /= 10;//updating number with remaining quotient
    }
    cout << reversed;
}

int checking_if_power_of_two(int n){
    while(n>0){
        n =n/2;
    }
    cout<<n;
}

int main()
{
    checking_if_power_of_two(34);
    reversal_of_number(125);
    cout << endl;
    cout << "homework is pending";
}