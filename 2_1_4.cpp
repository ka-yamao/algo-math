#include <iostream>
#include <string>
using namespace std;

// 10進法を2進法に変換するプログラム
// g++ -o 2_1_4 2_1_4.cpp && ./2_1_4

int N;
string Answer = "";

int main() {
  cin >> N;
  while (N >= 1) {
    // N % 2 は N を 2 で割った余り （例：N=13 の場合 1）
    // N / 2 は N を 2 で割った値の整数部分 (例：N=13 の場合 6)
    if (N % 2 == 0) Answer = "0" + Answer;
    if (N % 2 == 1) Answer = "1" + Answer;
    N = N / 2;
  }
  cout << Answer << endl; //出力
  return 0;
}