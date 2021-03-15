#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("enter a alphabet: ");
  scanf("%c",&ch);
  ch=toupper(ch);
  printf("%c ",ch);
  
  return 0;
}
  
//OUTPUT

/*

enter a alphabet: a
A 

*/
