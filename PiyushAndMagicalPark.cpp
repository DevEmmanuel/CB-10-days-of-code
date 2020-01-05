// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;

bool strength_left(vector<vector<char> > &park, int &m, int &n, int &k, int &s) {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      char c = park.at(i).at(j);
      if(s <= k)
        return false;
      if(c == '#') {
        break;
      }
      switch (c) {
        case '.' : s -= 2;
          break;
        case '*' : s += 5;
          break;
        default : break;
      }
      if(j != n - 1)
        s--;
    }
  }
  return true;
}

int main() {
  int m, n, s, k;
  vector<vector<char> > park;
  cin >> m >> n >> k >> s;
  for(int i = 0; i < m; i++) {
    vector<char> row;
    for(int j = 0; j < n; j++) {
      char val;
      cin >> val;
      row.push_back(val);
    }
    park.push_back(row);
  }
  bool not_lost = strength_left(park, m, n, k, s);
  if(s >= k && not_lost) {
    cout << "Yes" << endl;
    cout << s <<endl;
  }
  else
    cout << "No" << endl;
  return 0;
}
