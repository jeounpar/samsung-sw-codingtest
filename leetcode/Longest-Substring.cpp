#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int solution(int n) {
  int ans = 0;
  while (n != 0) {
    if (n % 2 == 0)
      n = n / 2;
    else {
      ans++;
      n = n - 1;
    }
  }
  return ans;
}
