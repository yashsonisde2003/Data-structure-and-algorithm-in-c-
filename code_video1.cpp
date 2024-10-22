#include <iostream>
using namespace std;

// int main()
// {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "you are eligible to vote";
//     }
//     else
//     {
//         cout << "you are not eligible to vote";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter number: ";
//     cin>>num;
//     if (num%2==0)
//     {cout<<"this is the even number";
//     }else{
//         cout<<"this is the odd number";
//     }

//     return 0;
// }

// int main()
// {
//     int marks;
//     cout << "tell me your marks";
//     cin>>marks;
//     if (marks >= 90)
//     {
//         cout << "A";
//     }
//     else if (marks <= 90 && marks >= 80)
//     {
//         cout << "B";
//     }
//     else if (marks >= 70 && marks <= 80)
//     {
//         cout << "c";
//     }
//     return 0;
// }

// the language knows the alphabets in bits and also know about the range of lower
//  and upper case character we just have a need to define a logic for differentiation

// int main()
// {
//     char alphabet;
//     cout << "enter the character?:- ";
//     cin >> alphabet;
//     if (alphabet >= 'a' && alphabet <= 'z')
//     {
//         cout << "this is lower case";
//     }
//     else if (alphabet >= 'A' && alphabet <= 'Z')
//     { cout<<"item is upper case";
//     }
// }

// 'A' to 'Z' ascii value 65 to 90  for further values just need to do +1
//'a' to 'b' ascii value 97 to 123 for further values just need to do +1

// int main()
// {
//     int num=0;
//     while (num <= 100)
//     {
//         cout << num << "\n" ;
//         num += 1;
//     }
// }

// int main(){
//     int count=1;
//     int num=0;

//     while (count<=5){
//         num+=count;
//         count+=2;
//     }
//     cout<<num;
// }

// int main()
// {
//     int n = 10;
//     int oddsum = 0;
//     for (int i = 1; i <= n; i++)
//         if ( i%2 == 0){
//             oddsum+=i;
//         }
//     cout<<oddsum;
// }

// int main()
// {
//     int num;
//     cout<<"tell me the number:- ";
//     cin >> num;
//     for (int i = 2; i < num; i++)
//         if (num % i == 0)
//         {
//             cout << "number is not prime";
//             break;
//         }else{
//             cout << "it is prime";
//             break;
//         }
// }

// int main()
// {
//     int n = 10;
//     int sum_divisible_three = 0;
//     for (int i = 0; i <= n; i++)

//         if (i % 3 == 0){
//             sum_divisible_three+=i;
//         }

//     cout<<sum_divisible_three;
// }

// int main(){
//     int n = 10;
//     int j = 1;
//     for (int i = 1; i <= n; i++)
//         j*=i;

//     cout << j;
// }

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    bool isprime = true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            isprime = false;
            break;
        }

    if (isprime == false){
        cout << "this is not prime";
    }else{
        cout << "this is prime";
    }
}