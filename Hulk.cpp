// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;

int return_min_jumps(int n) {
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  int div(2);
  while(n / div) {
    div *= 2;
  }
  div /= 2;
  return 1 + return_min_jumps(n - div);
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    cout << return_min_jumps(n) << endl;
  }
  return 0;
}
