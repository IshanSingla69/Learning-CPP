#include <iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cin >> n ;

    cout << fact(n) << endl;
    return 0;
}