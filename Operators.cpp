#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0 && n % 3==0)
    {
        cout << n << " is divisible by 2 and 3" << endl;
    }

    
    if(n % 2 != 0 || n % 3 != 0)
    {
        if(n % 2 != 0 && n % 3 != 0)
        {
            cout << n << " is neither divisible by 2 nor 3" << endl;
        }

        else
            cout << n << " is divisible by only one of them" << endl;
    }
    return 0;
}