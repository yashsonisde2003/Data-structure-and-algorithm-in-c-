#include <iostream>
using namespace std;

// int main(){
//     cout<<"VIDEO_4 OF NESTED LOOPS LECTURE ALL PATTERNS INCLUDING HOMEWOKR AND EXERCISE";
// }

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<n;j++){
//             cout<<ch;
//             ch=ch+1; //addition in ascii value
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=3;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 5;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {cout<<ch;
//         ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<num;
//             //num++;//for continuing the count in the each place horizontally
//         }
//         cout<<endl;
//         num++;//for continuing the count in the each line adding 1 in every other line
//     }
// }

// int main(){
//     int n=5;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch=ch+1;
//     }
// }

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << (j + 1);
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << i + 1;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n=4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i-1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != 0)
//         {
//             for (int j = 0; j < 2 * i - 1; j++) // 2*i-1 for odd number
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

//         if (k != (n - 2))
//         { // n-1 is used to highlight the last line of the outer loop
//             for (int l = 0; l < 2 * (n - k) - 5; l++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//last home work of the pattern video is pending

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*(n-i)-2;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }