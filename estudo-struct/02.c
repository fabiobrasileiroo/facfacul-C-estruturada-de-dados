#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};
int main() {
  struct myStructure s1 = {13, 'B', "Some text"};
  printf("%d %c %s \n", s1.myNum, s1.myLetter, s1.myString);
  return 0;
}
