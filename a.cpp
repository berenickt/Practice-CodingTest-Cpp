#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
  cout << "피보나치: " << n << endl;
  if(n == 0 || n == 1) return n;
  return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main() {
  cout << fibo(n) << endl;
  return 0;
}