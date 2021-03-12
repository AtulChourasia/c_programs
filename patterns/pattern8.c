  
#include <stdio.h>

int main() {
  int n,i,j,k;
    printf("Enter the Size of pattern : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  for(j=0;j<=n;j++){
    if(j>n-(i+1)){
    printf("*");
      
      }else{
    printf(" ");
      
      }
  }
    for(k=0;k<i;k++)
      printf("*");
    printf("\n");
    
  }
    return 0;
}


//OUTPUT

/*
Enter the Size of pattern : 5
     *
    ***
   *****
  *******
 *********
*/
