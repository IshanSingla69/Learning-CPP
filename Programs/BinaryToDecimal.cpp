#include <iostream>
using namespace std;

int convert(int num)
{
    int decimal = 0;
    int base = 1;
    while(num > 0)
    {
        int d = num % 10;
        decimal += d*base;
        base *= 2;
        num /= 10;
    }

    return decimal;
}

int main()
{
    int n;
    cin >> n;
    cout << convert(n);
    return 0;
}