#include <stdio.h>

int main() {
  int n,i,j;
    printf("Enter the Size of pattern : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  for(j=0;j<=n;j++){
    if(j>n-(i+1)){
    printf("%d",i+1);
      }else{
    printf(" ");
      
      }
  }
    printf("\n");
    
  }
    return 0;
}

//OUTPUT


/*
Enter the Size of pattern : 5
     1
    22
   333
  4444
 55555
*/
