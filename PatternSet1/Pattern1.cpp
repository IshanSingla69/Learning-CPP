#include "iostream"
using namespace std;

int main()
{
    int row;
    int col;

    cin >> row >> col;
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    
    return 0;
}