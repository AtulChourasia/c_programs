#include <stdio.h>

int main() {
  int n,i,j;
    printf("Enter the Size of pattern : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  for(j=0;j<=i;j++){
    printf("* ");
  }
    printf("\n");
    
  }
    return 0;
}
  

//OUTPUT

/*
Enter the Size of pattern : 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/
