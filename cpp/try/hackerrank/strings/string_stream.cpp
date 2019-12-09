// Copyright 2019 Shun Kakinoki.

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> tmp;
  // FAILED THIS PROBLEM
}

int main() {
  string str;
  cin >> str;
  vector<int> integers = parseInts(str);
  for (int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }

  return 0;
}
