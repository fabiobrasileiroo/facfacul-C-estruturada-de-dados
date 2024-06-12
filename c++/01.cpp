#include <iostream>

using namespace std;

int soma(int a, int b) {
  return a+b;
}
void imprime (double x) {
  cout << x << '\n';
}
bool ehPrimo(int x) {
  for(int i = 2; i<x;i++) {
    if(x%i == 0) return false;
  }
  return true;;
}
int main () {
  bool teste = ehPrimo(4);
  cout << teste << '\n';
  bool teste1;
  cin >> teste;
  cout << teste << '\n';
  string palavra1 = "ufam";
  palavra1.size();
  return 0;
}