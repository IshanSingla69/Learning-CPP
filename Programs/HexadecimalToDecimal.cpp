#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int decimal = 0;
    int base = 1;

    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            decimal += base * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            decimal += base * (n[i] - 'A' + 10);
        }
        base *= 16;
    }
    
    return decimal;
}

int main()
{
    string n;
    cin >> n;
    cout<<hexadecimalToDecimal(n);
    return 0;
}