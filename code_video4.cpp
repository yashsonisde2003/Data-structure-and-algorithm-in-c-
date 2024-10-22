#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     bool isprime = true;
//     for (int i = 2; i <= sqrt(n); i++) //instead of i*i<=n ,i<=(n-1)
//         if (n % i == 0)
//         {
//             isprime = false;
//             break;
//         }

//     if (isprime == false){
//         cout << "this is not prime";
//     }else{
//         cout << "this is prime";
//     }
// }

// int main(){
//     int n=6;

//     for(int i=0;i<n;i++){
//     char ch='A';
//         for(int j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch=ch+1; //here the 65 value of capital A is
//             //increasing to 66 in integer and then further is storing in character datatype
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 10;
//     int num=1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     // int m = 100;
//     int n = 10;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         // for (int j = 0; j < n; j++)//this is also correct and figured out by yash
//         for (int j = 0; j < i+1 ; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch = ch + 1;
//         // n++;
//     }
// }

// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<num;
//             num+=i;

//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 8;
//     // char ch = 'A'; // it will reset as it is under the loop

//     for (int i = 0; i < n; i++)
//     {
//         int num=1;
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << num << " ";
//             num++;
//             // ch = ch + 1;
//         }
//         cout << endl;
//     }

// int main()
// {
//     int n = 4;

//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ch<< " ";
//         }
//         cout << endl;
//         ch = ch + 1;
//     }
// }

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j > 0; j--) //only for running j vslues and printing in line for reverse order
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }
// }

// FLOYD'S TRIANGLE

// int main()
//  {
//      int n = 4;
//      int num = 1;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < i + 1; j++)
//          {
//              cout << num << " ";
//              num++;
//          }
//          cout << endl;
//      }
//  }

// FLOYD'S TRIANGLE CHARACTER VERSION

// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         //for(int j=0;j<n;j++) for the floyd's version's triangle
//         for(int j=i+1;j>0;j--){ //reversal rule applied
//             cout<<ch<<' ';
//             ch=ch+1;

//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j+1){
//             cout<<num<<" ";

//         }
//         cout<<endl;
//         num++;

//     }
// }

// WHEN SPACES ARE LEFT SIDE OF THE NUMBER YOU WILL HAVE TO PRINT THEM MANUALLY

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){// for printing spaces
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){//for printing number
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n=4;
//     char ch='A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <i; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch=ch+1;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){//for reverse printng of each line
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 4;
//     char ch='A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << ch;
//         }
//         cout << endl;
//         ch=ch+1;
//     }
// }

// int main()
// {
//     int n = 50;
//     for (int i = 0; i < n; i++)
//     {
//         int num = 1;
//         //spaces
//         for (int j = 1; j < n - i; j++) //here condition's alternate ((n-i-1) && j=0)
//         {
//             cout << " ";
//         }
//         //first half pyramid
//         for (int j = 0; j < i + 1; j++)//or for(int j=1;j<=i+1;j++)
//         {
//             cout << num;
//             num++;
//         }
//         //second half pyramid (backward loop)
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout << endl;
//     }
// }
// need to complete whole last pattern with the homework with each and every pattern practice

// hollow diamond pattern
// top part

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != 0) // when 2 stars line starts
//         {

//             for (int j = 0; j < 2 * i - 1; j++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }
//     for (int k = 0; k < n - 1; k++)
//     {
//         for (int l = 0; l < k + 1; l++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (k != n - 2)
//         {
//             for (int l = 0; l < 2 * (n - k) - 5; l++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }
// }
