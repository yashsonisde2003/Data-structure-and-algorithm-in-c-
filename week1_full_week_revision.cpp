#include <iostream>
using namespace std;

int prime_or_not(int n)
{
    bool isprime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
        }
    }
    return isprime;
}

int fibonnaci(int n)
{
    int t1 = 0, t2 = 1, nexterm;
    cout << t1 << " , " << t2;
    for (int i = 0; i < n; i++)
    {
        nexterm = t1 + t2;
        cout << " , " << nexterm;
        t1 = t2;
        t2 = nexterm;
    }
}
int upto_prime(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (prime_or_not(i) == 1)
        {
            cout << i;
        }
    }
};

int dec_to_binary(int num)
{
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int bin_to_dec(int num)
{
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int rem = num % 10;
        ans += (rem * pow);
        num = num / 10;
        pow *= 10;
    }
    return ans;
}

int square_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

int square_pattern_alphabets(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch += 1; // changing alphabets at each iteration by adding in ascii value
        }
        cout << endl;
    }
}

int square_pattern_with_updation_at_each_level(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << ' ';
            num++;
        }
        cout << endl;
    }
}

int square_pattern_with_updation_at_each_level_with_alphabet(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}

int triangle_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int triangle_pattern_with_updation_at_each_line(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
        }
        cout << endl;
        num++;
    }
}

int triangle_pattern_with_updation_at_each_line_with_alphabet(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch += 1;
    }
}

int triangle_at_each_line_starting_with_one(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int reverse_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--) // reversal order
        {
            cout << j;
        }
        cout << endl;
    }
}

int floyd_triangle(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

int floyd_triangle_alphabet(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}

int inverted_triangle_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

int pyramid_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

int hollow_diamond_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0) // this is to run half of the part only three times
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)//so the codition not run only for the last part where i=2 and n-2 means 4-2=2 which breaks the loop du condition becoming false 
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

int butterfly_pattern()

int main()
{
    hollow_diamond_pattern(4);
    cout << endl;
    pyramid_pattern(4);
    cout << endl;
    inverted_triangle_pattern(4);
    cout << endl;
    floyd_triangle_alphabet(4);
    cout << endl;
    floyd_triangle(4);
    cout << endl;
    reverse_triangle(4);
    cout << endl;
    triangle_at_each_line_starting_with_one(4);
    cout << endl;
    triangle_pattern_with_updation_at_each_line_with_alphabet(5);
    cout << endl;
    triangle_pattern_with_updation_at_each_line(4);
    cout << endl;
    triangle_pattern(4);
    cout << endl;
    square_pattern_with_updation_at_each_level_with_alphabet(4);
    cout << endl;
    square_pattern_with_updation_at_each_level(3);
    cout << endl;
    square_pattern_alphabets(4);
    cout << endl;
    square_pattern(4);
    // cout << bin_to_dec(101);
    // cout << dec_to_binary(9);
    // fibonnaci(10);
    // cout << endl;
    // int num;
    // cout<<"enter number to check"
    // cin>>num;
    //  if(prime_or_not(num==1){
    //     cout<<"Number is prime";
    //  }else{
    //     cout<<"Number is not prime"
    //  };

    // cout << upto_prime(10);
    // cout << prime_or_not(10);
    // cout << endl;
    cout << "weekly practice";
}
