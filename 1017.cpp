#include <bits/stdc++.h>

using namespace std;

double distance_total(int horas, int dist) {
    return horas * dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int horas, dist;
    cin >> horas >> dist;

    int distance = distance_total(horas, dist);
    double litros_gastos = distance / 12.0;    

    cout << setprecision(3) << fixed; 
    cout << litros_gastos << '\n';

    return 0;
}