#include <iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f*= i;
    }
    return f;
}

int nCr(int n, int r){
    int nCr = fact(n)/ (fact(n-r) * fact(r));
    return nCr;
}

int main(){
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        for(int j = 0; j <= i; j++){
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}