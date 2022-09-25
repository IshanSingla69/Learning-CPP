#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int divisibleCount = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            divisibleCount++;
        }
    }

    if(divisibleCount > 2){
        cout << n << " is not a prime no. \n";
    }
    else{
        cout << n << " is a prime no. \n";
    }

    return 0;
}
