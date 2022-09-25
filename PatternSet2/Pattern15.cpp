#include "iostream"
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for(; j < n+i; j++)
        {
            if(j == n-i+1 || j == n+i-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for(; j < n+i; j++)
        {
            if(j == n-i+1 || j == n+i-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    
    
    
    return 0;
}