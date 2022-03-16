#include <bits/stdc++.h>

using namespace std;

int main() {

    int day;

    cin >> day;

    int year = day / 365;
    int month = (day % 365) / 30;
    int days = (day % 365) % 30;

    cout << year << " ano(s)" << '\n';
    cout <<  month << " mes(es)" << '\n';
    cout << days << " dia(s)" << '\n';
    
    return 0;
}