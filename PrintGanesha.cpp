// https://github.com/DevEmmanuel

#include "bits/stdc++.h"
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std;

void print_ganesha_u(int &n) {
  for(int i = 0; i < n/2; i++) {
    for(int j = 0; j < n; j++) {
      if(i == 0) {
        if(j == 0 || j >= n/2)
          cout<<"*";
        else
         cout<<" ";
      }
      else {
        if(j == 0 || j == n/2)
          cout<<"*";
        else
          cout<<" ";
      }
    }
    cout<<endl;
  }
}

void print_ganesha_l(int &n) {
  for(int i = (n/2) + 1; i < n; i++){
    for(int j = 0; j < n; j++) {
      if(i == n - 1) {
        if(j == n-1 || j <= n/2)
          cout<<"*";
        else
         cout<<" ";
      }
      else {
        if(j == n - 1 || j == n/2)
          cout<<"*";
        else
          cout<<" ";
      }
    }
    cout<<endl;
  }
}
void print_ganesha(int n) {
  print_ganesha_u(n);
  for(int i = 0; i < n; i++)
    cout<<"*";
  cout<<endl;
  print_ganesha_l(n);
}

int main() {
  int n;
  cin >> n;
  print_ganesha(n);
  return 0;
}
