#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    //s => reverse
    int s = 0;

    while(n > 0){
        int d = n % 10; // d=> lastdigit
        s = s*10 + d;
        n = n/10;
        
    }

    cout << s << endl;

    return 0;
}