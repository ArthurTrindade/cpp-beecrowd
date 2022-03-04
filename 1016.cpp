#include <bits/stdc++.h>

using namespace std;

int distance(int km) {
    return km * 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int km;
    cin >> km;

    int distance_final = distance(km);

    cout << distance_final << " minutos" << '\n';

    return 0;
}