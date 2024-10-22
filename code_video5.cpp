#include <iostream>
using namespace std;

// int sum(int num1,int num2){
//    int total=num1+num2;
//     return total;
// }

int minnum(int a, int b)
{
    if (a < b)
    {
        cout << "a is the smaller:- ";
        return a;
    }
    else
    {
        cout << "b is the smaller:- ";
        return b;
    }
}

int sum_upto_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int multiplication(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = i * factorial;
    }
    return factorial;
}
// after return no code line will be executed and after return the function will be released from the memory of stack and the functions are stored in the stack as they are written in here int main is the last function and multiplication function comes above that the computer have two memory one is heep andother is stack

int sumofnum(int num)
{
    int sumofdigits = 0;
    while (num > 0)
    {
        int lastdigit = num % 10; // logic for getting last digit of a num like 235%10 will be 5 reminder
        num = num / 10;        // when float values are stored int type variable point and number after that are eliminated
              sumofdigits += lastdigit;
    }
    cout << sumofdigits;
}

int bCr(int b,int r){// binomial coffecient calculator formula of bCr=b!/r!*(b!-r!)
// int factorial_b=1;
// for(int i=1;i<=b;i++){
//     factorial_b=factorial_b*i;
// }
// int factorial_r=1;
// for(int i=1;i<=r;i++){
//     factorial_r=factorial_r*i;
// }
// int subtraction=(factorial_b-factorial_r);
// int bCr=factorial_r*subtraction;
// cout<<subtraction;
int fact_b=multiplication(b);
int fact_r=multiplication(r);
int fact_bmr=multiplication(b-r);
return fact_b/(fact_r*fact_bmr);
}
int main()
{
    // sumofnum(356789412);
    cout<<bCr(8,2);
    // int n=5; //this variable will take 5 sapce in int main memory
    // cout<<multiplication(n); //and the copy of that variable will be used in this function with different address and if the changes is made to the copy he original int main's varianle will not be affected
    // cout << minnum(10, 50);
    // cout << sum_upto_n(5);
    // cout<<" this is int function ";
}

// to solve the problem of redundancy we use the function means avoiding the writing of same code again and again
