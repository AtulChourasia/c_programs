#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("enter a alphabet: ");
  scanf("%c",&ch);
  if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' || ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
    printf("Vowel");
  }else{
    printf("Consonant");
  }
  
  return 0;
}
  

//OUTPUT

/*
enter a alphabet: I
Vowel
*/
