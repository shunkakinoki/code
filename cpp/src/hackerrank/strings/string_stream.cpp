// Copyright 2019 Shun Kakinoki.
// Reference: https://www.hackerrank.com/challenges/attribute-parser/forum
// REQUIRED FOR REVIEW

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> v;
  int i;
  char c;
  stringstream ss(str);
  while (ss >> i) {
    v.push_back(i);
    ss >> c;
  }
  return v;
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
