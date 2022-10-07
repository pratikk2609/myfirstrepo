#include<stdio.h>
#include<string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  struct myStructure s1 = {13, 'B', "Some text"};

  s1.myNum = 12;
  s1.myLetter = 'P';
  strcpy(s1.myString, "Hi!how are u");
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}