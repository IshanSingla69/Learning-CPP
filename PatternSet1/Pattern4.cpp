#include "iostream"
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << endl;

    for (int i = n; i > 0; i--)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            if(j >= i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    
    return 0;
}