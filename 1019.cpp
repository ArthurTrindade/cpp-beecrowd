#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sec;

  cin >> sec;

  int horas = sec / 3600;
  int min = (sec % 3600) / 60;
  int seg = (sec % 60);

  cout << horas << ":" << min << ":" << seg << '\n';

  return 0;
}
