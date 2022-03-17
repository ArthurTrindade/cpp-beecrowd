#include <bits/stdc++.h>

using namespace std;

void valida_valores (int a, int b, int c, int d) {
    int soma_AB = a + b;
    int soma_CD = c + d;

    if (b > c && d > a && soma_CD > soma_AB && (a % 2 == 0) && c >0 && d > 0) 
        cout << "Valores aceitos" << '\n';
    else cout << "Valores nao aceitos" << '\n';  
} 

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    valida_valores(a, b, c, d);

    return 0;
}

