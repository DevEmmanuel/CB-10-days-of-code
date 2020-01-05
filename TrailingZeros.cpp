// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;
ll trailing_zeros(ll num) {
  ll div(5), ans(0);
  while((num / div) > 0) {
    ans += num/div;
    div *= 5;
  }
  return ans;
}

int main() {
  ll num;
  cin >> num;
  cout << trailing_zeros(num) << endl;
  return 0;
}
