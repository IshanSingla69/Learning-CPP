#include <iostream>
#include <math.h>
using namespace std;

bool checkTriplet( int a, int b, int c){
    if(a*a  == b*b + c*c){
        return true;
    }
    return false;
}

int main(){
    int p, q, r;
    cin >> p >> q>> r;

    int a = max(p, max(q,r));

    int b,c;

    if(a == p){
        b = q;
        c = r;
    }
    else if(a == q){
        b = p;
        c = r;
    }
    else if(a == r){
        b = p;
        c = q;
    }

    if(checkTriplet(a, b, c)){
        cout << "Pythagorean Triplet";
    }
    else{
        cout << "Not a Pythagorean Triplet";
    }

}