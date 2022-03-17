#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c, aux;
    cin >> a >> b >> c;
    
    if (a < b){ aux = a; a = b; b = aux; } 
    if (b < c){ aux = b; b = c; c = aux; } 
    if (a < b){ aux = a; a = b; b = aux; }
    
    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << '\n';

    } else {

        if ( pow(a, 2) == (pow(b, 2) + pow(c, 2)) ) {
            cout << "TRIANGULO RETANGULO" << '\n';

        } else if ( pow(a, 2) > (pow(b, 2) + pow(c, 2)) ) {
            cout << "TRIANGULO OBTUSANGULO" << '\n';

        } else if ( pow(a, 2) < (pow(b, 2) + pow(c, 2)) ) {
            cout << "TRIANGULO ACUTANGULO" << '\n';

        }

        if  (a == b && a == c) {
            cout << "TRIANGULO EQUILATERO"<<endl;

        } else if (a == b || b == c) {
            cout << "TRIANGULO ISOSCELES"<<endl;

        }
    }
    return 0;
}