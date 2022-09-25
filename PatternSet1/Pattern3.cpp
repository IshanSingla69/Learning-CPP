#include "iostream"
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = n; j > i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
    
    return 0;
}