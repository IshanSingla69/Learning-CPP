#include "iostream"
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << endl;

    
    for (int i = 0; i < n + 1; i++)
    {
        int j = 0;
        for (j = 0; j < 2*n + 2; j++)
        {
            if(j <= i || j >= 2*n + 1 - i)
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
    
    for (int i = n + 1; i < 2*n + 2; i++)
    {
        int j = 0;
        for (j = 0; j < 2*n + 2; j++)
        {
            if(j >= i || j <= 2*n + 1 - i)
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