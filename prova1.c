#include <stdio.h>
int f(int num) {
  if(num < 1) return 0;
  else {
    if(num == 1) return 1;
    else
      return (num + f(num - 1));
  }
}
int main() {
  printf("%d",f(4));
  return 0;
}