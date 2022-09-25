#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while(n>0){
        int d = n%10;
        sum += round(pow(d, 3));

        n /= 10;
    }

    if(sum == temp){
        cout << temp <<" is an Armstrong number";
    }
    else{
        cout << temp <<" is not an Armstrong number";
    }

    return 0;
}