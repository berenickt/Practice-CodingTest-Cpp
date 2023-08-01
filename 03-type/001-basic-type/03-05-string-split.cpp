#include <bits/stdc++.h>
using namespace std;

/** 📌 split()
 * 다른 언어에서도 문자열을 특정 문자열을 기준으로 쪼개어서
 * 배열화시키는 함수라는 의미로 사용되는데
 * C++에서는 STL에서 split() 함수를 지원하지 않습니다.
 * 그래서 만들어야 합니다.
 * O(n)의 시간복잡도
 */
vector<string> split(string input, string delimiter) {
  vector<string> ret;
  long long pos = 0;
  string token = "";

  // **** 3줄만 외우면 됩니다
  // input에서 delimiter를 찾습니다. 못 찾을 때까지는 이 루프는 반복
  while ((pos = input.find(delimiter)) != string::npos) {
    // 찾았다면 해당 pos까지 해당 부분 문자열을 추출
    // e.g. abcd에서 d를 찾았다면 pos는 3을 반환하게 되고
    // 3만큼 substr을 하기 때문에 abc를 추출
    token = input.substr(0, pos);

    // 그 다음 이 추출한 문자열을 ret이란 배열에 집어 넣습니다.
    ret.push_back(token);

    // 앞에서 부터 문자열을 지웁니다.
    // abcdabc에서 d가 delimeter이라면 pos = 3,
    // delimeter의 사이즈는 1이기 때문에
    // 앞에서 부터 4의 크기의 문자열을 제거해 abc만 남게 됩니다.
    input.erase(0, pos + delimiter.length());
  }
  ret.push_back(input);
  return ret;
}

int main() {
  string s = "안녕하세요 큰돌이는 킹갓제너럴 천재입니다 정말이에요!", d = " ";
  vector<string> a = split(s, d);
  for (string b : a) cout << b << "\n";
}
/*
안녕하세요
큰돌이는
킹갓제너럴
천재입니다
정말이에요!
*/