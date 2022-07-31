#include <iostream>
#include <string>
using namespace std;
int N;
string Answer = "";//stringは文字列型

int main() {
  cin >> N; //入力部分
  while (N>=1) {
  //N%2はNを2で割った余り（例：N=13の場合1）
  //N/2はNを2で割った値の整数部分（例：N=13の場合6）
  if (N%2==0) Answer = "0" + Answer;
  if (N%2==1) Answer = "1" + Answer;
  N=N/2;
  }
  cout << Answer << endl;//出力部分
  return 0;
}