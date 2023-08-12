#include <bits/stdc++.h>
using namespace std;

/**
 * 최대공약수 gcd
 */
int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

/**
 * 최소공배수란 lcm은 (a * b / (a와 b의 최대공약수))
 */
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
  int a = 10, b = 12;
  cout << lcm(a, b) << '\n'; // 60
  return 0;
}
